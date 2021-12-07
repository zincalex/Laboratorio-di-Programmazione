#ifndef PALINDROME2_CPP
#define PALINDROME2_CPP

#include <string>
#include <iostream>

using namespace std;

bool is_palindrome(const char s[], int lenght) {
	int i, j, mid;
	if( lenght % 2 == 0) {
		j = lenght / 2;
		i = j -1;
	}
	else {
		mid = lenght / 2;
		j = mid +1;
		i = mid - 1;
	}
	while(i >= 0 && j <= lenght -1) {
		if(s[i] != s[j]) return false;
		i--;
		j++;
	}
	
	return true;
}
int main() {
    char pal[] = "itopinonavevanonipoti";
	int lenght = sizeof(pal) - 1;
	bool truth = is_palindrome(pal, lenght);
	if(truth) {
		cout << "palindroma";
	}
	
	return 0;
	
}


#endif