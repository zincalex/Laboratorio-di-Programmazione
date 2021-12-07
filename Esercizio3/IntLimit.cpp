//An int can hold integers only up to a maximum number. Find an approximation of that maximum number by using fibonacci().

#include <iostream>
#include <vector>

using namespace std;

void fibonacci(int x, int y, vector<int>& v, int n) {    //passaggio per riferimento, quindi si va a modificare direttamente l'oggetto vector v
    if(v.size() == 0) return;
    v[0] = x;
    v[1] = y;
    for(int i = 2; i < n; i++) {
        v[i] = v[i-1] + v[i-2];
    }
}

void LimitCheck(vector<int>& v) {
    cout << "Il numero massimo e' : ";
    for(int i = 0; i < v.size(); i++) {
        if(v[i] < 0) {
            cout << v[i-1];
            return;
        }
    }
}

int main() {
    int x = 1;
    int y = 2;
    int n = 1000;
    string text = "fibonacci con " + to_string(n) + " valori";
    vector<int> v(n);
    fibonacci(x,y,v,n);
    LimitCheck(v);
    return 0;
}