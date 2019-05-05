#include <iostream>
#include<vector>

using namespace std;

int main() {
	//double f() {/* ...*/ };
	//decltype(f()) sum = 0;

	vector <double> v;
	for(decltype(v.size()) i = 0; i != v.size(); ++i) {
		cout<<endl;
	}
	system("pause");
	return 0;
}
