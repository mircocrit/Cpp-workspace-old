#include <iostream>
using namespace std;

	//RETURN BY VALUE
int DoubleValue(int nX){
	int nValue = nX * 2;
	return nValue; // A copy of nValue will be returned here
}
/*
	//RETURN BY REFERENCE:non si possono restituire reference a variabili locali
int& DoubleValue(int nX){
	int nValue = nX * 2;
	return nValue; // return a reference to nValue here
}
*/
