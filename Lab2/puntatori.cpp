#include <iostream>

using namespace std;

int main() {
	int my_int;
	int *p1 = &my_int, *p2 = &my_int,  *p3 = &my_int;
	my_int = 4;
	cout << "  p1 == " << p1 << ", conten of p1 = = " << *p1 << '\n';
	*p1 = 5;
	cout << "  p1 == " << p1 << ", conten of p1 = = " << *p1 << '\n';
	cout << "  p2 == " << p2 << ", conten of p2 = = " << *p2 << '\n';
	p1 += 4;
	cout << "  p1 == " << p1 << ", conten of p1 = = " << *p1 << '\n';
	return 0;
}