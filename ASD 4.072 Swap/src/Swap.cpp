#include <iostream>

using namespace std;

void swap(int& v1, int& v2) {
	int tmp = v2;
	v2 = v1;
	v1 = tmp;
}

bool isShorter(const string& s1, const string& s2) {
	return s1.size() < s2.size();
}

int main() {
	int i = 10;
	int j = 20;
	swap(i, j);
	cout<<i<<"  "<<j<<endl;
	system("pause");
	return 0;
}

