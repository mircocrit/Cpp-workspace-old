#include <iostream>

using namespace std;

class Person{
	public:
		Person(string n,int eta) : name(n), age(eta){}
		Person(string n) : Person(n,18){}
		Person(const Person& p) : name(p.name), age(p.age) {}	// this is the copy constructor that the compiler creates for you, and you cannot write a better one
	private:
		string name;
		unsigned int age;
};
