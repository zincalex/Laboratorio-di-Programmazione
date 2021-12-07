#ifndef DOCUMENT_CPP
#define DOCUMENT_CPP

Document::Document(void) {}
Document::Document(istream& input) {
	string linea;
	if(input.is_open()) {
		while( getline(input, linea) ) {
			l.push_back(linea);
		}
	}
	else cout << "Unable to open the input file" << endl;
}
Document::Document(const Document& d) {
	l = d.l;
}
Document::Document(Document&& d) {
	l = d.l;
}
Document::Document& operator=(Document&& d) {
	l = d.l;
	return *this;
}
Document::Document& operator=(const Document& d) {
	l = d.l;
	return *this;
}
Document::~Document() {}
	
void Document::add_line(const string& _s) {
	l.push_back(_s);
}
void Document::read_line(istream& input) {
	string s;
	getline(input, s);
	l.push_back(s);
}
int Document::size() const {
	return l.size();
}
int Document::char_count() const {
	int count = 0;
	for(auto i = l.begin(); i <= l.end(); i++) {
		string g = *i; //accede elemento puntato dall'iteratore
		count += g.size();
	}
	return count;
}
int Document::char_count_no_whitespaces() const {
	int count= 0;
	int temp = 0;
	for(auto i = l.begin(); i <= l.end(); i++) {
		string g = *i; //accede elemento puntato dall'iteratore
		temp = g.size();
		for(int j = 0; j < g.size(); j++) {
			if(g[j] == " ") {
				temp--;
			}
		}
		count += temp;
	}
	return count;
}
	
void Document::find_replace(const string& _search, const string& _replace) {
	for(auto i = l.begin(); i <= l.end(); i++) {
		string g = *i; //accede elemento puntato dall'iteratore
		if(g.find(_search) != string::npos) {
			string firstPart = g.substr(0, g.find(_search));
			string secondPart = g.substr(g.find(_search) + _search.size())
			string assembled = firstPart + _replace + secondPart;
			i* = assembled;
			i--;
		}
	}
}
ostream& operator<<(ostream& o, const Document& d);



#endif