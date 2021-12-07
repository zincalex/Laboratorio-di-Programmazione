/*  
    Create a vector of Fibonacci numbers and print them using the function from exercise 2. To create the vector, write a function, fibonacci(x, y,
    v, n), where integers x and y are ints, v is an empty vector<int>, and n is the number of elements to put into v; v[0] will be x and v[1] will be y.
    A Fibonacci number is one that is part of a sequence where each element is the sum of two previous ones. For example, starting with 1 and
    2, we get 1, 2, 3, 5, 8, 13, 21, .... Your fibonacci() function should make such a sequence starting with its x and y arguments.
*/

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

void print(vector<int>& v, string text) {
    cout << "Il vettore " << text << " contiene i seguenti elementi interi : ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i];
    }
}

int main() {
    int x = 1;
    int y = 2;
    int n = 10;
    string text = "fibonacci con " + to_string(n) + " valori";
    vector<int> v(n);
    fibonacci(x,y,v,n);
    print(v,text);
    return 0;
}