#ifndef VECTORCLASS_CPP
#define VECTORCLASS_CPP

#include "VectorClass.hpp"
#include "My_Exception.hpp"

namespace  vector {
		Vect::Vect(const int& s)  : size{ s }, elemPoint{ new double[s] }
		{
			for(unsigned int i = 0; i < s; i++) elemPoint[i] = 0;
		}
		Vect::~Vect() { delete[] elemPoint; }
		
		double Vect::get(const int& a) const { return elemPoint[a]; }
		double Vect::safe_get(const int& a) const { 
			if(a > size || a < 0) throw MyException("Out of Bound");
			return elemPoint[a];
		}
		double Vect::set(const double& elem, const int& a) {
			double ret = elemPoint[a];
			elemPoint [a] = elem;
			return ret;
		}
		double Vect::safe_set(const double& elem, const int& a) {
			if(a > size || a < 0) throw MyException("Out of Bound");
			double ret = elemPoint[a];
			elemPoint [a] = elem;
			return ret;
		}
		
		double& Vect::operator[](int n) { 
			if(n > this->size || n < 0) throw MyException("Out of Bound");
			return elemPoint[n];
		}
		double Vect::operator[](int n) const {
			if(n > this->size || n < 0) throw MyException("Out of Bound");
			return elemPoint[n];
		}	
}

#endif