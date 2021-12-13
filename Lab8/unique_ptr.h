#ifndef UNIQUE_PTR_H
#define UNIQUE_PTR_H

template<typename T>
class unique_ptr {
	private:
        T* ptr;
		
	public:
    unique_ptr() noexcept;
    unique_ptr(nullptr _t) noexcept : unique_ptr() {};
    unique_ptr(T* pointer) noexcept;
    unique_ptr(unique_ptr&& _x) noexcept;
    ~unique_ptr();

    T* relese();
     
    unique_ptr(const unique_ptr& other) = delete;
    unique_ptr& operator=(const unique_ptr& other) = delete;
};


#include "unique_ptr.hpp"
#endif