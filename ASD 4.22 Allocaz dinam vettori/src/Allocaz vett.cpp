#include <iostream>
using namespace std;

int main() {
	//ALLOCAZIONE DINAMICA VETTORI
	int nSize = 12;
	int *pnArray = new int[nSize]; // nSize does not need to be constant!
	pnArray[4] = 7;

	delete[] pnArray;
	/**MEMORY LEAK
	int nValue = 5;
	int *pnValue = new int;
	pnValue = &nValue; // old address lost, memory leak results

	 //es 2
	int *pnValue = new int;
	pnValue = new int; // old address lost, memory leak results
	 */
	system("pause");
	return 0;
}
