#include <iostream>

class Book {
    private:
        std::string title;
        std::string author;
        int copyright_date;
        std::string ISBN;
        bool in_stock;

        bool check_ISBN();
        bool check_copyright_date() { return copyright_date < 2022 && copyright_date > 1800; }

    public:
        //Create functions for returning those data values
        std::string get_title() const { return title; }
        std::string get_author() const { return author; }
        int get_copyright_date() const { return copyright_date; }
        std::string get_ISBN() const { return ISBN; }
        bool book_in_stock() const { return in_stock; }

        void return_book();
        void take_book();
        Book(std::string _title, std::string _author, int _c_d, std::string _ISBN);
};

//Implement the == operator that checks         
//whether the ISBN strings are the same fortwo books.
bool operator==(const Book& b1, const Book& b2);

//Implement the != operator that checks         
//whether the ISBN strings are the same fortwo books.
bool operator!=(const Book& b1, const Book& b2);

//Have a << operator print out the title, author and ISBN on separate lines.
std::ostream& operator<<(std::ostream& os, const Book& b);

