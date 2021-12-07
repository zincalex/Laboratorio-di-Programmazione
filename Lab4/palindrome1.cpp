#ifndef PALINDROME1_CPP
#define PALINDROME1_CPP

#include <string>
#include <iostream>

using namespace std;

bool is_palindrome(const string& s) {
	int i, j, mid;
	if( s.size() % 2 == 0) {
		j = s.size() / 2;
		i = j -1;
	}
	else {
		mid = s.size() / 2;
		j = mid +1;
		i = mid - 1;
	}
	while(i >= 0 && j <= s.size() -1) {
		if(s[i] != s[j]) return false;
		i--;
		j++;
	}
	
	return true;
}
int main() {
	
	string pal = "anna";
	bool truth = is_palindrome(pal);
	if(truth) {
		cout << "palindroma";
	}
	
	return 0;
	
}


#endif