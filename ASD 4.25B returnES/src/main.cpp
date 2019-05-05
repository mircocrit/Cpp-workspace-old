#include <iostream>
using namespace std;
//Return by reference (cont.)

struct FixedArray25 {
	int anValue[25];// This struct holds an array of 25 integers
};

int& Value(FixedArray25 &rArray, int nIndex) {
	return rArray.anValue[nIndex];			// Returns a reference to the nIndex element of rArray
}

int main(){
	FixedArray25 sMyArray;
	// Set the 10th element of sMyArray to the value 5
	Value(sMyArray, 10) = 5;
	cout << sMyArray.anValue[10] << endl;
	system("pause");
	return 0;
}
