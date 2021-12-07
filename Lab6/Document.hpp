#ifndef DOCUMENT_HPP
#define DOCUMENT_HPP

#include <fstream>
#include <list>
#include <iostream>
#include <string>

using namespace std;

class Document {
	private:
	list<string> l;
	
	public :
	Document(void); // costruttore di default
	Document(ifstream& input);
	Document(const Document& d); //copy constructor
	Document(Document&& d); //moving constructor
	Document& operator=(Document&& d); //assegnamento move
	Document& operator=(const Document& d); //assegnamento di copia
	
	void add_line(const string& _s);
	void read_line(ifstream& input);
	int size() const;
	int char_count() const;
	int char_count_no_whitespaces() const;
	void find_replace(const string& _find, const string& _replace);

	list<string>::iterator end(void);
	list<string>::iterator begin(void);	
};

ostream& operator<<(ostream& o, Document& d);

#endif