#include <iostream>
#include <string>	////<<<<-------------------
using namespace std;

int main() {
	//1) ASSEGNAMENTO
	string sString;
	sString = string("One");	// Assign a string value
	cout << sString << endl;
	cout<<sString.length()<<endl;
	cout<<sString.empty()<<endl;
	cout<<sString[0]<<endl;

	const string sTwo("Two");	//constr
	sString.assign(sTwo);		// Assign a C-style string
	cout << sString << endl;

	//sString = "Three";
	//cout << sString << endl;

	//sString.assign("Four");
	//cout << sString << endl;

	sString = '5';		// Assign a char
	cout << sString << endl;

	string sOther;
	sString = sOther = "Six";	 // Chain assignment
	cout << sString << " " << sOther << endl;


	//ASSEGMANETO(cont)

	const string sSource("abcdefg");
	string sDest;
	sDest.assign(sSource, 2, 4);		// assign a substring of source from index 2 of length 4
	cout << sDest << endl;


	//CONCATENAZIONE

	sString.assign("one");
	sString += string(" two");
	string sThree(" three");
	sString.append(sThree);
	cout << sString << endl;

	system("pause");
	return 0;
}

