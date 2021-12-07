#include "Rational.h"

int Rational::GDC() {
	int A = n;
	int B = d;
	int temp;

	while(B) {
		temp = B;
		B = A%B;
		A = temp;
	}
	return A;
}
void Rational::minTerm() {
	int GDCNumber = GDC();

	if(GDCNumber != 0) {
		n = n / GDCNumber;
		d = d / GDCNumber;
	}
}

int main() {
	int numerator = 0;
    int denominator = 0;
    std::cout << "Insert first fraction: \n Numerator: ";
    std::cin >> numerator;
    std::cout << "Denominator: ";
    std::cin >> denominator;
    Rational rational1(numerator, denominator);
    std::cout << "Insert second fraction: \n Numerator: ";
    std::cin >> numerator;
    std::cout << "Denominator: ";
    std::cin >> denominator;
	Rational rational2(numerator, denominator);
    Rational sum = rational1 + rational2;
	std::cout << "Your numbers are :  \n" << rational1.toString() << "\n" << rational2.toString() << "\n";
   	std::cout << "Addition: " << sum.toString() << "\n";
    Rational sub = rational1 - rational2;
    std::cout << "Subtraction: " << sub.toString() << "\n";
    Rational mul = rational1 * rational2;
    std::cout << "Multiplication: " << mul.toString() << "\n";
    Rational div = rational1 / rational2;
    std::cout << "Division: " << div.toString() << "\n";
    return 0;
}