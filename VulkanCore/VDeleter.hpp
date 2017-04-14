//
// Created by Guillaume on 14/04/2017.
//

#ifndef VULKAN_VDELETER_HH
#define VULKAN_VDELETER_HH

#include <iostream>
#include <memory>
#include <vulkan/vulkan.hpp>

template <typename T>
class VDeleterCStyle {
public:
	VDeleterCStyle() : VDeleterCStyle([](T, VkAllocationCallbacks*) {}) {}

	VDeleterCStyle(std::function<void(T, VkAllocationCallbacks*)> deletef) {
		this->deleter = [=](T obj) { deletef(obj, nullptr); };
	}

	VDeleterCStyle(const VDeleterCStyle<VkDevice>& device, std::function<void(VkDevice, T, VkAllocationCallbacks*)> deletef) {
		this->deleter = [&device, deletef](T obj) { deletef(device, obj, nullptr); };
	}

	~VDeleterCStyle() {
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

namespace urcan {
	template<typename T, typename U>
	class VDeleter {
	private:
		std::function<void(T)> deleter;
		U _del;
		T _obj;

	private:
		void cleanup() {
			if (_obj) {
				if (deleter)
					deleter(_obj);
				else
					_del(_obj);
			}
			_obj = nullptr;
		}

	public:
		VDeleter() : _obj(nullptr) {
			this->_del = U(nullptr);
		}

		VDeleter(VDeleter<vk::Instance, vk::InstanceDeleter> const& instance) : _obj(nullptr) {
			this->_del = U(instance, nullptr);
		}

		VDeleter(VDeleter<vk::Device, vk::InstanceDeleter> const& device) : _obj(nullptr) {
			this->_del = U(device, nullptr);
		}

		~VDeleter() {
			cleanup();
		}

		void setDelete(VDeleter<vk::Instance, vk::InstanceDeleter> const& instance, std::function<void(VkInstance, T, VkAllocationCallbacks*)> deletef)
		{
			this->deleter = [&instance, deletef](T obj) { deletef(static_cast<VkInstance>(vk::Instance(instance)), obj, nullptr); };
		}

		const T* operator&() const {
			return &_obj;
		}

		T* replace() {
			cleanup();
			return &_obj;
		}

		operator T() const {
			return _obj;
		}

		void operator=(T rhs) {
			if (rhs != _obj) {
				cleanup();
				_obj = rhs;
			}
		}

		template<typename V>
		bool operator==(V rhs) {
			return _obj == T(rhs);
		}

		template<typename V>
		VDeleterCStyle<V> toCStyle()
		{
			VDeleterCStyle<V> ret;
			*(ret.replace()) = static_cast<V>(_obj);
			return ret;
		}
	};
}

#endif //VULKAN_VDELETER_HH
