#include <iostream>
 
 using namespace std;
 
 void f() {
	 int v[10];
	 int *p1 = &v[5];
	 for(int i = -5; i < 5; i++) {
		 p1[i] = i + 5;
		 cout << p1[i] << '\n';
	 }
	 
 }
 
 void f_illegal() {
	 int v[10];
	 int *p1 = &v[5];
	 for(int i = -7; i < 7; i++) {
		 p1[i] = i + 5;
		 cout << p1[i] << '\n';
	 }
 }
 

 int main() {
	f();
	f_illegal();
	 return 0;
 }