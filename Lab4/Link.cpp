#ifndef LINK_CPP
#define LINK_CPP

#include <string>
#include <iostream>

using namespace std;

struct Link { //doubly linked list nello struct tutto e' public
	string value;
	Link* prev;
	Link* succ;

	Link(const string& v, Link* p = nullptr, Link* s = nullptr)  {
		value = v;
		prev = p;
		succ = s;
	}
		
	Link* insert(Link* n, Link* pr) {
		if(!n) return pr;
		if(!pr) return n;
		
		pr->succ = n;
		if(n->prev) n->prev->succ = pr;
		pr->prev = n->prev;
		n->prev = pr;
		return pr;
	}

	Link* add(Link* n, Link* af) {
		if(!n) return af;
		if(!af) return n;
		
		af->prev = n;
		if(n->succ) n->succ->prev = af;
		af->succ = n->succ;
		n->succ = af;
		return af;
	}
	
	//la deallocazione della memoria viene lasciata all'utente chiamante
	Link* erese(Link* ca) {
		if(!ca) return nullptr;

		if(ca->succ) ca->succ->prev = ca->prev;
		if(ca->prev) ca->prev->succ = ca->succ;

		return ca->succ;
	}

	Link* find(Link* p, const string& v) {
		while(p) {
			if(p->value == v) return p;
			p = p->succ;
		}
		return nullptr;
	}

	Link* pop_back() {
		Link* p = this;
		while(p) {
			if(p->succ == nullptr) {
				p->prev->succ = nullptr;
				p->prev = nullptr;
				return p;
			} 
			p = p->succ;
		}
		return nullptr;
	}
	Link* pop_front() {
		Link* p = this;
		while(p) {
			if(p->prev == nullptr) {
				p->succ->prev = nullptr;
				p->succ = nullptr;
				return p;
			} 
			p = p->prev;
		}
		return nullptr;
	}

	void push_front(Link* p) {
		Link* fake_this = this;
		while(fake_this) {
			if(fake_this->prev == nullptr) {
				fake_this->prev = p;
				p->succ = fake_this;
			} 
			fake_this = fake_this->prev;
		}
	}
	void push_back(Link* p) {
		Link* fake_this = this;
		while(fake_this) {
			if(fake_this->succ == nullptr) {
				fake_this->succ = p;
				p->prev = fake_this;
			} 
			fake_this = fake_this->succ;
		}
		
	}
};


#endif