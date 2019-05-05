#include <iostream>
using namespace std;


void SelectionSort(int*, int);
void swap( int&, int&);
bool Ascending(int,int);

int main() {
	int arr[12]={2,3,1,5,3,9,6,3,7,1,2,4};
	SelectionSort(arr,12);
	for(int i=0;i<12;i++)
		cout<<arr[i]<<endl;
	system("pause");
	return 0;
}

bool Ascending(int nX, int nY) {
	return nY > nX;
}

void swap( int &arr1, int &arr2){//via reference
	int temp=arr2;
	arr2=arr1;
	arr1=temp;
}

void SelectionSort(int *anArray, int nSize) {
	using namespace std;
	for (int nStartIndex= 0; nStartIndex < nSize; nStartIndex++) {
		int nBestIndex = nStartIndex;
		// Search through every element starting at nStartIndex+1 // Note that we are using the user-defined comparison here
		for (int nCurrentIndex = nStartIndex + 1; nCurrentIndex < nSize; nCurrentIndex++) {
			if (Ascending(anArray[nCurrentIndex], anArray[nBestIndex]))	// COMPARISON DONE HERE
				nBestIndex = nCurrentIndex;
		}
		// Swap our start element with our best element
		swap(anArray[nStartIndex], anArray[nBestIndex]);
	}
}
