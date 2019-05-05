#include "String.h"
#include <iostream>
#include <cstring>

using namespace std;

int main() {
	/*
	String s1("abc");
	String s2 = s1;
	*/
	String s1("Mirco");
	String s2("Luca");
	s2 = s1;
	cout<<"Il valore degli indirizzi e:	\n"<< &s1.chars<<"\n" << &s2.chars<<endl;

	system("pause");
	return 0;
}
