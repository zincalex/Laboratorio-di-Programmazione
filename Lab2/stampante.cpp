#include <iostream>
 
 using namespace std;
 
void print_array(void *_array, int arr_size) {
	int *ext;
	for(unsigned int j = 0; j < arr_size; j++) {
		ext = ((int*)_array) + j;
		cout << *ext << '\n';
	}	
}
 
 int main() {
	const int vsize = 96;
	int my_array[vsize];
	cout << "Size  of int " << sizeof(vsize) << '\n';
	for(unsigned int i = 0; i < vsize; i++)
		my_array[i] = i+1;
	print_array(my_array, vsize);
	 return 0;
 }