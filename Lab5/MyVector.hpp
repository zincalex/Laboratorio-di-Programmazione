#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

#include "Exception.hpp"

template<typename T>
MyVector<T>::MyVector() : sz{0}, capacity{1}, elem{new T} {}

template<typename T>
MyVector<T>::MyVector(int s) : sz{0}, capacity{s}, elem{new T[s]} {}

template<typename T>
MyVector<T>::MyVector(const MyVector& x){
	sz = x.sz;
	capacity = x.capacity;
	elem = new T[x.capacity];
	copy(x.elem, x.elem + sz, elem);
}

template<typename T>
void MyVector<T>::operator=(const MyVector& x) {
	T* p = new T[x.capacity];
	copy(x.elem, x.elem + x.sz, p);
	delete[] elem;
	elem = p;
	sz = x.sz;
	capacity = x.capacity;
}

template<typename T>
MyVector<T>::~MyVector() {delete[] elem;}

template<typename T>
T& MyVector<T>::operator[](int n) {
	if(n > capacity || n < 0) throw Exception("Out of Bound");
	return elem[n];
}

template<typename T>
T MyVector<T>::operator[](int n) const { 
	if(n > capacity|| n < 0) throw Exception("Out of Bound");
	return elem[n]; 
}

template<typename T>
void MyVector<T>::push_back(const T& e) {
	if(sz == capacity) {
		reserve(2*capacity);
	}
	elem[sz] = e;
	sz++;
}

template<typename T>
bool MyVector<T>::isEmpty() const {
	return sz == 0;
}

template<typename T>
T& MyVector<T>::pop_back() {
	sz--;
	return elem[sz];
}

template<typename T>
void MyVector<T>::erase() {
	for(unsigned int i = 0; i < sz; i++) {
		elem[i] = 0;
	}
	sz = 0;
}

template<typename T>
T& MyVector<T>::at(const int indx) const {
	if(indx < 0 || indx > capacity) {
		throw Exception("OUT OF BOUND");
	}
	return elem[indx];
	}

template<typename T>
int MyVector<T>::contains(T& e) const {
	for(unsigned int i = 0; i < sz; i++) {
		if(elem[i] == e) 
			return i;
	}
	return -1;
}

template<typename T>
int MyVector<T>::size() const {return sz;}

template<typename T>
void MyVector<T>::reserve(int new_cap) {
	if(capacity > new_cap) return;
	T* n_elem = new T[new_cap];
	for(unsigned int i = 0; i < sz; i++) n_elem[i] = elem[i];
	for(unsigned int i = sz; i < new_cap; i++) n_elem[i] = 0;
	delete[] elem;
	elem = n_elem;
	n_elem = nullptr;
}

#include "MyVector.hpp"
#endif