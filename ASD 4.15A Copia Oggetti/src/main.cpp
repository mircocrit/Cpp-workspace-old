#include <iostream>

#include "Person.cpp"
using namespace std;

Person g() {
	Person p5("Joe");
	return p5;
}

int main() {
	//Gli oggetti sono copiati in diversi casi

	// Inizializzazioni
	Person p1("Bob");
	Person p2(p1);
	Person p3=p1;

	// Passaggio per valore
	//void f(Person p) { ... }
	//f(p1);
	// Assegnamento
	Person p4("Alice");
	p4 = p1;
	// Funzioni che restituiscono un valore

	system("pause");
	return 0;
}

