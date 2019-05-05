#include <iostream>
using namespace std;

int main() {
	/*int nValue = 5;
	int *pnPtr = &nValue; //assign address of nValue to pnPtr
	cout << &nValue << endl; //print the address of variable nValue
	cout << pnPtr << endl; //print the address that pnPtr is holding


	int nValue = 5;
	double dValue = 7.0;
	int *pnPtr = &nValue; // ok
	double *pdPtr = &dValue; // ok
	pnPtr = &dValue; // wrong -- int pointer cannot point to double value
	pdPtr = &nValue; // wrong -- double pointer can not point to int value

		*/
	//dereferenziazione
	int nValue = 5;
	cout << &nValue<<endl; // prints address of nValue
	cout << nValue<<endl; // prints contents of nValue
	int *pnPtr = &nValue; // pnPtr points to nValue
	cout << pnPtr<<endl; // prints address held in pnPtr, which is &nValue
	cout << *pnPtr<<endl; // prints contents pointed to by pnPtr, which is contents of nValue


	system("pause");
	return 0;
}
