#ifndef VECTORCLASS_HPP
#define VECTORCLASS_HPP

#include <iostream>

namespace vector { 
	
class Vect {
	private:
		int size;
		double *elemPoint;
	
	public :
		Vect(const int& s);
		~Vect();
		
		double get(const int& a) const;
		double safe_get(const int& a) const;
		
		double set(const double& elem, const int& a);
		double safe_set(const double& elem, const int& a);
		//Overload dell'operatore[] per il set e get. Guardare slide per chiarimento
		double& operator[](int n);
		double operator[](int n) const;
};


	
}

#endif