#include <iostream>
#include "Fibonacci.h"
#include "Fibonacci2.h"
#include <vector>
using namespace std;

// 1,1,2,3,5,8,13,21,34,...passo 8=34

int main(){
	int passo;
	auto f=new Fibonacci2();
	cout<<"Passo (0--n) --->";
	cin>>passo;
	cout<<f->value(passo)<<endl;
	system("pause");
	return 0;
}
