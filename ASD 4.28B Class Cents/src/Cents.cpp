#include <iostream>
#include <assert.h>
using namespace std;

// Ovviamente sul tipo del parametro template deve essere definito l'operatore <, ad esempio per la funzione max

class Cents{
	private:
		int m_nCents;
	public:
		Cents(int nCents): m_nCents(nCents) { }	//costruttore
		friend bool operator>(Cents &c1, Cents&c2) {		//definizone di maggiore
			return (c1.m_nCents > c2.m_nCents) ? true: false;
	}
};

