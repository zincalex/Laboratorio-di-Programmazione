#include "Document.hpp"

int main() {
    ifstream inFile;
    inFile.open(".\\input.txt");
    if(!inFile) {
        cout << "Unable to open file input.txt";
        exit(1);
    }
    Document test{inFile};
    inFile.close();
    Document copia{};
    copia = test;
    cout << test << endl << endl;
    string finale = "E cosi' tutti vissero felici e contenti";

    cout << "TEST ADD LINE ALLA FINE : " << '\n';
	test.add_line(finale);
    cout << test << endl << endl;

    ifstream inFile2;
    inFile2.open(".\\input2.txt");
    if(!inFile2) {
        cout << "Unable to open file input2.txt";
        exit(1);
    }
    cout << "TEST READ LINE FROM NEW FILE : " << '\n';
    test.read_line(inFile2);
    inFile2.close();
    cout << test << endl << endl;

    cout << "TEST DEI VARI COUNTERS  : " << '\n';
    cout << " il mio file ha : " << test.size() << " righe" << endl;
    cout << " il mio file ha : " << test.char_count() << " caratteri spazi inclusi" << endl;
    cout << " il mio file ha : " << test.char_count_no_whitespaces() << " caratteri spazi esclusi" << endl << endl;
	

    cout << "TEST FIND AND REPLACE CHECK NAME ZANZI : " << '\n';
    test.find_replace("Zanzi", "Kabir");
	cout << test << endl << endl;
    return 0;
}