#include <iostream>
using namespace std;

void PrintValues(int nValue1, int nValue2=10){
	cout << "1st value: " << nValue1 << endl;
	cout << "2nd value: " << nValue2 << endl;
}

int main() {
	PrintValues(1);	// nValue2 will use default parameter of 10
	PrintValues(3, 4);	// override default value for nValue2
	system("pause");
}
