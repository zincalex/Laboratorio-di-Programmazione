#ifndef DOCUMENT_HPP
#define DOCUMENT_HPP

#include <fstream>
#include <list>
#include <string>

using namespace std;

class Document {
	private:
	list<string> l;
	
	public :
	Document(void); // costruttore di default
	Document(istream& input);
	Document(const Document& d); //copy constructor
	Document(Document&& d); //moving constructor
	Document& operator=(Document&& d) //assegnamento move
	Document& operator=(const Document& d); //assegnamento di copia
	~Document(); //destructor
	
	void add_line(const string& _s);
	void read_line(istream& input);
	int size() const;
	int char_count() const;
	int char_count_no_whitespaces() const;
	void find_replace(const string& _find, const string& _replace);
	
	//creare metodi begin e end per fare degli iteratori
};

ostream& operator<<(ostream& o, const Document& d);


#endif