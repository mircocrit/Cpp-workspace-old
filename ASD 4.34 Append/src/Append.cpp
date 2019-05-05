#include <iostream>
#include <string>
using namespace std;

int main() {

	//APPEND
	string sString("one ");
	const string sTemp("twothreefour");
	sString.append(sTemp, 3, 5);
	//append substring of sTemp starting at index 3 of length 5
	cout << sString << endl;

	//APPEND CON +
	sString.assign("one");
	sString += " two";
	sString.append(" three");
	cout << sString << endl;

	system("pause");
	return 0;
}
