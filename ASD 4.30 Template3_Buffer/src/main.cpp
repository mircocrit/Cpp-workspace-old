#include <iostream>
#include <cstring>
#include "Buffer.cpp"


int main(){
	//stampa al contrario di interi
	Buffer<int, 12> cIntBuffer;		// declare an integer buffer with room for 12 chars
	for (int nCount=0; nCount < 12; nCount++)	// Fill it up in order, then print it backwards
		cIntBuffer[nCount] = nCount;	//sempre a sx il return
	for (int nCount=11; nCount >= 0; nCount--){
		std::cout << cIntBuffer[nCount] << " ";
	}
	std::cout << std::endl;

	Buffer<char, 31> cCharBuffer;		// declare a char buffer with room for 31 chars

	strcpy(cCharBuffer.GetBuffer(), "Hello there!");		// strcpy a string into the buffer and print it
	std::cout << cCharBuffer.GetBuffer() << std::endl;

	system("pause");
	return 0;
}
