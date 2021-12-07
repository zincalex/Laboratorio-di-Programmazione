#include <iostream>

using namespace std;
#define array_size 10

int main() {
	int *pVet = new int[array_size];
	int i = 0;
	while(true) {
		*pVet[i] = i ;
		cout << pVet[i] << endl;
		i++;
	}
	return 0;
}