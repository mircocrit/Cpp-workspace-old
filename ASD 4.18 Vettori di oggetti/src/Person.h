#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <string>
#include <iostream>

using namespace std;

//Write a program to read a user's input and store it in the class object below.

class Person{
	public:
		Person();
		Person(string pname, int page);
		Person(string pname);
		string getName() const;
		int getAge() const;
		void print() const;
		void setName( string name);
		void setAge( int age );
		Person(Person&);
	private:
		string name;
		int age; //If 0 is unknown.
};

#endif // PERSON_H_INCLUDED
