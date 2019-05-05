#include <iostream>
using namespace std;

int main() {
	//ALLOCAZIONE DINAMICA DI MEMORIA
	int *pnValue = new int; // dynamically allocate an integer
	*pnValue = 7; // assign 7 to this integer
	//DEALLOCAZIONE
	delete pnValue; // unallocate memory assigned to pnValue
	pnValue = 0;
	system("pause");
	return 0;
}
