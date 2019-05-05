
#include <iostream>
#include <vector>
using namespace std;
//
int main() {
	//REFERENCE
	int ival = 1024;
	int& refval = ival;
	refval+= 2;
	cout<<&refval<<endl;
	int *ii = &refval;
	cout<<ii<<endl;

	// POINTER
	int* ip1; // can also be written int *ip1
	//Point* p = nullptr; // pointer to object of class Point.
	// nullptr is "no object", same as Java’s null.
	// nullptr is new in C++11, C++98 used 0

	 ival = 1024;
	 int* ip2 = &ival;

	 //DEREFERENZIAZIONE
	 ival = 1024;
	 ip2 = &ival;
	 cout << *ip2 << endl; // prints 1024
	 *ip2 = 1025;
	 cout << *ip2 << endl;
	 system("pause");
	 return 0;
}
