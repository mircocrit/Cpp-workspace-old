#include <iostream>
#include <Person.h>

using namespace std;

class Person{
	public:
		Person(){name = "";age = 0;}
		Person(string pname, int page){name = pname;age = page;}
		Person(string pname){name = pname;age = 18;}
		string getName() const{return name;}
		int getAge() const{return age;}
		void print() const{cout << "Name : " << name << endl;	cout << "Age : " << age << endl;}
		void setName(string name){this->name = name;}
		void setAge( int age ){this->age = age;}
		Person(const Person& p) : name(p.name), age(p.age) {}
		Person& operator=(const Person&p);
	private:
		string name;
		unsigned int age;
};
