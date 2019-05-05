#include <iostream>
#include <assert.h>
using namespace std;

template <typename Type>
Type max_(Type tX, Type tY){ // this is the template parameter declaration(oppure anche class)
	return (tX > tY) ? tX : tY;
}

int main() {
	int nValue = max_(3,7);
	cout<<nValue<<endl; // returns 7
	double dValue = max_(6.34,18.523);
	cout<<dValue<<endl; // returns 18.523
	char chValue = max_('a','6');
	cout<<chValue<<endl;// returns 'a'
	system("pause");
	return 0;
}

