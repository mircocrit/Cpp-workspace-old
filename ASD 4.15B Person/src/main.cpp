#include <iostream>
#include "Person.cpp"
using namespace std;

int main() {

	auto p1= new Person("Mirco",22);
	//Person p4("Bob");
	auto p2(p1);

	cout<<p2->get_name()<<"  "<<p2->get_age()<<endl;
	//cout<<p1<<endl;
	//cout<<p4<<endl;
	//Person p3 = p1;
	system("pause");
	return 0;
}
