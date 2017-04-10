//
// Created by Guillaume on 25/03/2017.
//

#ifndef VULKAN_VDELETER_HPP
#define VULKAN_VDELETER_HPP

#include <vulkan/vulkan.h>
#include <functional>

template <typename T>
class VDeleter {
public:
    VDeleter() : VDeleter([](T, VkAllocationCallbacks*) {}) {}

    VDeleter(std::function<void(T, VkAllocationCallbacks*)> deletef) {
        this->deleter = [=](T obj) { deletef(obj, nullptr); };
    }

    VDeleter(const VDeleter<VkInstance>& instance, std::function<void(VkInstance, T, VkAllocationCallbacks*)> deleteF) {
        this->deleter = [&instance, deleteF](T obj) { deleteF(instance, obj, nullptr); };
    }

    VDeleter(const VDeleter<VkDevice>& device, std::function<void(VkDevice, T, VkAllocationCallbacks*)> deleteF) {
        this->deleter = [&device, deleteF](T obj) { deleteF(device, obj, nullptr); };
    }

    ~VDeleter() {
        cleanup();
    }

    const T* operator &() const {
        return &object;
    }

    T* replace() {
        cleanup();
        return &object;
    }

    operator T() const {
        return object;
    }

    void operator=(T rhs) {
        if (rhs != object) {
            cleanup();
            object = rhs;
        }
    }

    template<typename V>
    bool operator==(V rhs) {
        return object == T(rhs);
    }

private:
    T object{VK_NULL_HANDLE};
    std::function<void(T)> deleter;

    void cleanup() {
        if (object != VK_NULL_HANDLE) {
            deleter(object);
        }
        object = VK_NULL_HANDLE;
    }
};


#endif //VULKAN_VDELETER_HPP
