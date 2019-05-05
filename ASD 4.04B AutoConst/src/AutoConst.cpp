#include <iostream>
#include <vector>

using namespace std;

int main() {
	int i = 0;
	int& r = i;
	cout<<r<<endl;
	cout<<&r<<endl<<endl;

	auto a = r; // a is int, the value is 0
	cout<<a<<endl;
	cout<<&a<<endl<<endl;

	auto& b = r; // b is ref to int
	cout<<b<<endl;
	cout<<&b<<endl<<endl;

	const int ci = 1;
	//dichiarare esplicitamente const ed &
	auto c = ci;	// c is int, the value is 1
	const auto d = ci; // d is const int, the value is 1
	cout<<c<<endl;
	cout<<&c<<endl<<endl;

	system("pause");
}
