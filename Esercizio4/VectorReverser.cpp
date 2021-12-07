#include <iostream>
#include <vector>

using namespace std;

vector<int> UntouchedReversion(vector<int> v) {
    vector<int> out(v.size());
    int i = 0;
    for(int j = v.size() - 1; j >= 0; j--) {
        out[i++] = v[j];
    }
    return out;
}

void ReverseVector(vector<int>& v) {
    int temp;
    for(int i = 0; i < v.size() / 2; i++) {
        temp = v[i];
        v[i] = v[v.size() - 1 - i];
        v[v.size() - 1 - i] = temp;
    }
}

void print(vector<int>& v) {
    //cout << "Il vettore  contiene i seguenti elementi interi : ";
    for(int i = 0; i < v.size(); i++) {
        if(i > 0) cout << " - ";
        cout << v[i];
    }
    cout << "\n";
}

int main() {
    int n;
    cout << "Quanti elementi nel vettore? Inserisci : ";
    cin >> n;
    vector<int> x(n);
    cout << "--------------------------  Inserimento elementi nel vettore  -------------------------- \n";
    for(int i = 0; i < x.size(); i++) {
        cout << "Inserire elemento " << to_string(i) << " nel vettore : ";
        cin >> x[i];
    }
    vector<int> rev1 = UntouchedReversion(x);
    ReverseVector(x); //Visto il passaggio per rifermimento nel metodo, il vettore originale viene cambiato
    print(rev1);
    print(x);
}
