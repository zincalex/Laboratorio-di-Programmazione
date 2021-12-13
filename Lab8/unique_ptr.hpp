#ifndef UNIQUE_PTR_HPP
#define UNIQUE_PTR_HPP

template<typename T>
unique_ptr<T>::unique_ptr() noexcept{
    ptr = nullptr;
}
template<typename T>
unique_ptr<T>::unique_ptr(T* pointer) noexcept {
    ptr = pointer;
}

template<typename T>
unique_ptr<T>::unique_ptr(unique_ptr&& _x) noexcept {
    ptr = _x;
}

template<typename T>
unique_ptr<T>::~unique_ptr() {
    if(ptr == nullptr)
        return;
    delete ptr;
}

template<typename T>
T* unique_ptr<T>::relese() {
    T* ret = ptr;
    ptr = nullptr;
    return ret;	
}


#include "unique_ptr.h"

#endif