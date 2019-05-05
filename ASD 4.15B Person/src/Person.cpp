#include <iostream>

using namespace std;

class Person{
	public:
		Person(string nam,int ag) : name(nam), age(ag) {}
		Person(string nam) : Person(nam,18) {}
		Person(const Person& p) : name(p.name), age(p.age) {}// this is the copy constructor that the compiler creates for you, and you cannot write a better one
		string get_name() const	{return name; };			//getter
		unsigned int get_age() const 	{return age; };
	private:
		string name;
		unsigned int age;
};
