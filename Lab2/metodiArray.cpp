#include <iostream>
 using namespace std;
 
 void print_array_lenght(const double *array) {
	 cout << "Dimensione dell'array con funzione  : " << sizeof(array) << "\n";
 }

 int main() {
	const int size1 = 10;
	double arr[size1];
	cout << "Dimensione dell'array : " << sizeof(arr) << "\n";
	print_array_lenght(arr);
	 return 0;
 }