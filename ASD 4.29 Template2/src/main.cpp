#include <iostream>
#include <assert.h> // for assert()
#include "Array.cpp"
#include "IntArray.cpp"

//programma che ad un array di 12 interi 1 2 3 4 ..aggiunge 0.5
//facendolo diventare array di double e li stampa entrambi

int main() {
	Array<int> anArray(12);
	Array<double> adArray(12);
	for (int nCount = 0; nCount < 12; nCount++) {
		anArray[nCount] = nCount;
		adArray[nCount] = nCount + 0.5;
	}
	for (int nCount = 11; nCount >= 0; nCount--)
		std::cout << anArray[nCount] << "\t" << adArray[nCount] <<std::endl;
	system("pause");
	return 0;
}
