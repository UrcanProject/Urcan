//
// Created by Guillaume on 14/04/2017.
//

#ifndef VULKAN_VDELETER_HH
#define VULKAN_VDELETER_HH

#include <iostream>
#include <memory>
#include <exception>
#include <vulkan/vulkan.hpp>
#include <thread>
#include <chrono>

namespace urcan {
	template<typename T, typename U>
	class VDeleter {
	protected:
		T _obj;

	protected:
		virtual void cleanup() {
			if (_obj) {
				U del = U();
				del(_obj);
			}
			_obj = nullptr;
		}

	public:
		VDeleter() : _obj(nullptr) {}

		virtual ~VDeleter() {
			std::this_thread::__sleep_for(std::chrono::seconds(0), std::chrono::nanoseconds(10000000)); //fixme: Ugly fix for an heisenbug SEGV. It slow down the destructor, and everything is fine
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

	template<typename T, typename U, typename V>
	class VDeleterExtended : public VDeleter<T, U>
	{
	private:
		V &_delOpt;

	protected:
		virtual void cleanup() override {
			if (this->_obj) {
				U del = U(_delOpt.get(), nullptr);
				del(this->_obj);
			}
			this->_obj = nullptr;
		}

	public:
		VDeleterExtended() : VDeleter<T, U>(), _delOpt(nullptr) {}

		VDeleterExtended(V& delOpt) : VDeleter<T, U>(), _delOpt(delOpt) {}

		virtual ~VDeleterExtended() {
			cleanup();
		}
	};
}

#endif //VULKAN_VDELETER_HH
