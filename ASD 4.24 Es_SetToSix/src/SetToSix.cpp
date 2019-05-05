#include <iostream>
using namespace std;
int nFive = 5;
int nSix = 6;

void SetToSix(int *pTempPtr);

int main() {
	int *pPtr = &nFive; 	// First we set pPtr to the address of nFive. Which means *pPtr = 5
	cout << *pPtr; 		// This will print 5
	// Now we call SetToSix (see function below),, pTempPtr receives a copy of the address of pPtr
	SetToSix(pPtr);
	// pPtr is still set to the address of nFive!
	cout << *pPtr; // This will print 5
	return 0;
}

// pTempPtr copies the value of pPtr!
void SetToSix(int *pTempPtr){

	pTempPtr = &nSix;	// This only changes pTempPtr, not pPtr!
	cout << *pTempPtr; // This will print 6
}
