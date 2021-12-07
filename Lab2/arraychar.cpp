#include <iostream>
 
 using namespace std;
 
 int main() {
	 char stringa[] = "Prova di esempio";
	 for(unsigned int i =0; i < sizeof(stringa) -1; i++) {
		 cout << stringa[i] << '\n';
	 }
	 cout << (int)stringa[sizeof(stringa) -1];
	 
	 return 0;
 }