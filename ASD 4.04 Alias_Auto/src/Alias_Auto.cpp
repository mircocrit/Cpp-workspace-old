
#include <iostream>
#include <vector>
using namespace std;
//ALIAS
using intero=int;
typedef int intero;

typedef unsigned long counter_type;
using counter_type = unsigned long;

typedef vector<int> table_type;
using table_type = vector<int>;

int main() {
	//AUTO:
	vector<int> v; // a vector is like a Java ArrayList
	vector<int>::iterator it = v.begin(); // begin() returns vector<int>::iterator
	auto func = [](int x) { return x * x; }; // a lambda function
	system("pause");
	return 0;
}
