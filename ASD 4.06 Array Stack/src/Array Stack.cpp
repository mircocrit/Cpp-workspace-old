#include <iostream>
using namespace std;

int main() {
	//accesso con puntatori
	int x[] = {0,2,4,6,8};
	//usando le funzioni libreria
	for (int* px = begin(x); px != end(x); ++px) {			//oppure: for (int* px = x; px != x + 5; ++px) {
		cout << *px << endl;
	}
	system("pause");
	return 0;
}

void f(){
	int a = 5;
	int x[3]; // size must be a compile-time constant
	for (size_t i = 0; i != 3; ++i) {
		x[i] = (i + 1) * (i + 1);
	}
}
