/*
    Design and implement a Name_pairs class holding (name, age) pairs where name is a string and age is a double. Represent that as a
    vector<string> (called name) and a vector<double> (called age) member. Provide an input operation read_names() that reads a series of
    names (you can choose how to stop the input series). Provide a read_ages() operation that prompts the user for an age for each name,
    Provide a print() operation that prints out the (name[i], age[i]) pairs (one per line) in the order determined by the name vector.
*/

#include <iostream>
#include <vector>

using namespace std;

class Name_pairs {
    public :
        void read_names() {
            bool cond = false;
            cout << "Insert a name, 'quit' to shut the session \n";
            while(!cond) {
                string nn;
                cin >> nn;
                if(nn.compare("quit") == 0) {
                    cond = true;
                }
                else {
                    name.push_back(nn);
                } 
            }
        }
        void read_ages() {
            if(name.size() == 0) {
                cout << "Before inserting any age, you should add new names ! \n";
                return;
            }
            while(age.size() < name.size()) {  
                double aa;
                cout << "Age for ... " << name.at(age.size()) << endl;
                cin >> aa;
                age.push_back(aa);
            }
        }
        void print() {
            for(unsigned int i = 0; i < name.size(); i++) {
                cout << "(" << name[i] << ", " << age[i] << ")" << endl;
            }
        }
    private : 
        vector<string> name;
        vector<double> age;
};

int main() {
    Name_pairs obj1;
    string cond_for_new_name;
    bool cond = true;
    while(cond) {
        cout << "Welcome, would you like to insert a new name?  [y/n] ";
        cin >> cond_for_new_name;
        if(cond_for_new_name.compare("y") == 0) {
            obj1.read_names();
            cout << "Looks like you have inserted new names, you must insert their age now \n";
            obj1.read_ages();
        }
        else cond = false;
        cout << "Printing.................. \n";
        obj1.print();
    }
    return 0;
}
