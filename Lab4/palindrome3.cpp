#ifndef PALINDROME2_CPP
#define PALINDROME2_CPP

#include <string>
#include <iostream>

using namespace std;

bool is_palindrome(const char *first, const char *last) {
	while(first  < last) {
		if(*first  != *last) {
			return false;
		}
		first++;
		last--;
	}
	
	return true;
}
int main() {
    char pal[] = "anna";	
	char *first = pal;
	char *last =  first + sizeof(pal) - 2;
	bool truth = is_palindrome(first, last);
	if(truth) {
		cout << "palindroma";
	}
	
	return 0;
	
}


#endif