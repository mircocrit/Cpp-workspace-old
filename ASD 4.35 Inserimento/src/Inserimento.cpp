#include <iostream>
#include <string>
using namespace std;

int main() {

	//INSERIMENTO
	string sString("aaaa");
	cout << sString << endl;
	sString.insert(2, string("bbbb"));
	cout << sString << endl;
	sString.insert(4, "cccc");
	cout << sString << endl;

	system("pause");
	return 0;
}
