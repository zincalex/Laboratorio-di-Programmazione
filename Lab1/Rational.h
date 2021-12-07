#include <iostream>

class Rational{			
	public : 

		Rational() {
			n = 0;
			d = 1;
		}
		Rational(int _n, int _d) {		
			n = _n;
			if(_d == 0) {
				d = 1;
			}
			else d = _d;
		}

		//Metodi più complessi definiti in un cpp
		int GDC();  //Find Greatest Common Divisior
		void minTerm();

		//Metodi semplici già definiti
		double convertion() { return n / d; }
		int get_num() const { return n; }
		int get_den() const { return d; }
		std::string toString() { 
			std::string ret = "" + std::to_string(n) + "|" + std::to_string(d) + "";
			return ret;
		}
	
	private : 
		int n;
		int d;
};

//Helper Function
Rational operator+(const Rational &a, const Rational &b) {
	int c_den = a.get_den()*b.get_den();
	int c_num = a.get_num()*b.get_den() + a.get_den()*b.get_num();
	Rational ret(c_num, c_den);
	ret.minTerm();
	return ret;
}

Rational operator*(const Rational &a, const Rational &b) {
	int c_den = a.get_den()*b.get_den();
	int c_num = a.get_num()*b.get_num();
	Rational ret(c_num, c_den);
	ret.minTerm();
	return ret;	
}

Rational operator/(const Rational &a, const Rational &b) {
	int c_den = a.get_den()*b.get_num();
	int c_num = a.get_num()*b.get_den();
	Rational ret(c_num, c_den);
	ret.minTerm();
	return ret;	
}

Rational operator-(const Rational &a, const Rational &b) {
	int c_den = a.get_den()*b.get_den();
	int c_num = a.get_num()*b.get_den() - a.get_den()*b.get_num();
	Rational ret(c_num, c_den);
	ret.minTerm();
	return ret;	
}
bool operator==(Rational& a, Rational& b) 
{
	a.minTerm();
	b.minTerm();
	return ( a.get_num() == b.get_num() && a.get_den() == b.get_den());
}
