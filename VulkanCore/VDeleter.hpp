//
// Created by Guillaume on 14/04/2017.
//

#ifndef VULKAN_VDELETER_HH
#define VULKAN_VDELETER_HH

#include <iostream>
#include <memory>
#include <vulkan/vulkan.hpp>

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

		T& get()
		{
			return _obj;
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

	};
}

#endif //VULKAN_VDELETER_HH
