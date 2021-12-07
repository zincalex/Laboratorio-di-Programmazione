#ifndef MYVECTOR_H
#define MYVECTOR_H

using namespace std;

template<typename T>
class MyVector {
	private:
		int capacity;
		T* elem;
		int sz;
		
	public:
		MyVector();
		explicit MyVector(int s); //we dont want a double to be passed
		MyVector(const MyVector& x);
		void operator=(const MyVector& x);
		~MyVector();
		
		T& operator[](int n);
		T operator[](int n) const;
	
		void push_back(const T& e);
		T& pop_back();
		void erase();
		bool isEmpty() const;
		T& at(const int indx) const;
		int contains(T& e) const;
		int size() const;
		void reserve(int n_size);
};

#include "MyVector.hpp"
#endif