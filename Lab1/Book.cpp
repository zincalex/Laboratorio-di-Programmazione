#include "Book.h"
#include <regex>

using namespace std;

Book::Book(string _title, string _author, int _c_d, string _ISBN) {
    title = _title;
    author = _author;
    in_stock = true;
    copyright_date = _c_d;
    while(!check_copyright_date()) {
        cout << "Invalid date, try with something between  1800-2021 \n New date : ";
        cin >> _c_d;
        copyright_date = _c_d;
    }
    
    ISBN = _ISBN;
    while(!check_ISBN()) {
        cout << "Invalid ISBN, try with something like n-n-n-x \n New ISBN : ";
        cin >> _ISBN;
        ISBN = _ISBN;
    }    
}
bool Book::check_ISBN() {
    return regex_match(ISBN, regex("^[0-9]+-[0-9]+-[0-9]+-[a-zA-Z0-9]{1}$"));
}

void Book::return_book() { 
    if(in_stock == true) {
        cout << "This book is already in the library \n";
    }
    else in_stock = true;
}
void Book::take_book() {
    if(in_stock == false) {
        cout << "This book was taken by someone else, not avaible in the library \n";
    }
    else in_stock = false;
}

//Implement the == operator that checks         
//whether the ISBN strings are the same fortwo books.
bool operator==(const Book& b1, const Book& b2) {
    return b1.get_ISBN() == b2.get_ISBN();  
}

//Implement the != operator that checks         
//whether the ISBN strings are the same fortwo books.
bool operator!=(const Book& b1, const Book& b2) {
    return !(b1.get_ISBN() == b2.get_ISBN());
}

//Have a << operator print out the title, author and ISBN on separate lines.
std::ostream& operator<<(std::ostream& os, const Book& b) {
    return os << "Title : " << b.get_title() << "\n Author : " << b.get_author() << "\n ISBN : " << b.get_ISBN() << "\n";
}

int main() {
    Book cityhunter("City Hunter ", "Tsukasa Hojo", 1980, "145-6-871-j");
    Book SlamDunk("SlamDunk", "Takeiko Inoue", 1990, "145-6a-871-k");
    cityhunter.return_book();
    cityhunter.take_book();
    cout << cityhunter;
    Book Onepiece("Onepiece", "Eichiro Oda", 1999, "145-6-871-j");
    if (cityhunter == Onepiece) {
        cout << "ISBN uguali \n";
    }
    if (SlamDunk != cityhunter) {
        cout << "ISBN diversi \n";
    }
    cityhunter.return_book();
    cout << SlamDunk;
    return 0;
}