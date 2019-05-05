#include <iostream>
using namespace std;



void AddOne(int &y){ // y is a reference variable
	y = y + 1;
}

int main() {
	int x = 5;
	cout << "x = " << x << endl;
	AddOne(x);
	//foo(x);
	cout << "x = " << x << endl;
	return 0;
}

//VALORE
void foo(int y) {
	cout << "y = " << y << endl;
}
//CONST REFERENCE

void foo2(const int &x){
	x = 6; // x is a const reference and can not be changed!
}
//ADDRESS
void foo3(int *pValue){
	*pValue = 6;
}
