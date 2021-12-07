#include <iostream>
#include <vector>

using namespace std;
#define vet_size 10

int main() {
	vector<int> *my_pointer = new vector<int>(10);
	vector<int> my_vector = {0,1,2,3,4,5,6,7,8,9};	
	for(unsigned int i = 0; i < vet_size; i++) {
		(*my_pointer)[i] = i;
		cout << (*my_pointer)[i] << endl;
	}
	return 0;
}