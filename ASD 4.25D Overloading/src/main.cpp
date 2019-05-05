#include <iostream>
using namespace std;

int Add(int nX, int nY){
	return nX + nY;
}

double Add(double nX, double nY){
	return nX + nY;
}

double Add(double nX, double nY, double nZ){
	return nX + nY + nZ;
}
int main() {
	int a=3,b=5;
	double c=4.5,d=5.5;
	cout<<Add(a,b)<<endl;
	cout<<Add(c,d)<<endl;
	cout<<Add(c,d,double(a))<<endl;
	system("pause");
	return 0;
}
