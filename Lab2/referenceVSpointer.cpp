#include <iostream>
 
 using namespace std;
 
void print_reference(const double &_double, const  int &_int) {
	cout << "Double con reference : " << _double << " Integer con reference : " << _int << '\n'; 
}
void print_pointer(double *pd, int *pi) {
	cout << "Double con puntatore : " << *pd << " Integer con puntatore : " << *pi << '\n'; 
}
 
 int main() {
	 const double  e = 2.71;
	 const int cento = 100;
	double var_double = e;
	int var_int = cento;
	print_reference(var_double, var_int);
	print_pointer(&var_double, &var_int);
	
	 return 0;
 }