#include <iostream>
using namespace std;

// Note our user-defined comparison is the third parameter

void SelectionSort(int *, int, bool (*pComparison)(int,int));
void swap(int&, int&);
bool Ascending(int, int);
bool Descending(int, int );
void PrintArray(int*, int);

int main(){
	using namespace std;
	int anArray[9] = { 3, 7, 9, 5, 6, 1, 8, 2, 4 };
	// Sort the array in descending order using the Descending() function
	SelectionSort(anArray, 9, Descending);
	PrintArray(anArray, 9);
	// Sort the array in ascending order using the Ascending() function
	SelectionSort(anArray, 9, Ascending);
	PrintArray(anArray, 9);
	system("pause");
return 0;
}


void SelectionSort(int *anArray, int nSize, bool (*pComparison)(int, int)){
	using namespace std;
	for (int nStartIndex= 0; nStartIndex < nSize; nStartIndex++) {
		int nBestIndex = nStartIndex;
		// Search through every element starting at nStartIndex+1
		for (int nCurrentIndex = nStartIndex + 1; nCurrentIndex < nSize;nCurrentIndex++){
			// Note that we are using the user-defined comparison here
			if (pComparison(anArray[nCurrentIndex], anArray[nBestIndex]))
				// COMPARISON DONE HERE
				nBestIndex = nCurrentIndex;
		}
		// Swap our start element with our best element
		swap(anArray[nStartIndex], anArray[nBestIndex]);
	}
}

void swap(int &arr1, int &arr2){//via reference
	int temp=arr2;
	arr2=arr1;
	arr1=temp;
}
// Here is a comparison function that sorts in ascending order (Note: it's exactly the same as the previous Ascending() function)
bool Ascending(int nX, int nY){
	return nY > nX;
}
// Here is a comparison function that sorts in descending order
bool Descending(int nX, int nY){
	return nY < nX;
}
// This function prints out the values in the array
void PrintArray(int *pArray, int nSize){
	for (int i=0; i < nSize; i++)
		cout << pArray[i] << " ";
	cout << endl;
}
