#include <iostream>
#include <vector>

using namespace std;

void print(vector<int>& v, string text) {
    cout << "Il vettore " << text << " contiene i seguenti elementi interi : ";
    for(int i = 0; i < v.size(); i++) {
        if(i > 0) cout << " - ";
        cout << v[i];
    }
}

int main() {
    vector<int> a {10,9,8,7,6,5,4,3,2,1};
    string testo = "con elementi da 10 a 0";
    print(a, testo);
    return 0;
}