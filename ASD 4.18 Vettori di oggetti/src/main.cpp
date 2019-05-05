#include <iostream>
#include <vector>
#include "Person.h"
using namespace std;
int main(){
	vector<Person> v; // vector of Person objects
	Person p1("Bob");
	v.push_back(p1);	// p1 is copied
	v.push_back(Person("Alice")); // the object is moved
	for (const auto& p : v) {	//ciclo range based
		cout << p.getName() << endl;
	}

	//puntatori ad oggetti sull'heap
/*
	vector<Person*> pv;
	Person* p = new Person("Bob");
	pv.push_back(p);

	for(auto pptr : pv){
		cout << pptr->getName() << endl;
	}

	for(auto pptr : pv){
		delete pptr;
	}
	*/
	system("pause");
}
