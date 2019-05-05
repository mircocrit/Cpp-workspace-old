#include <iostream>
using namespace std;

int main() {
	size_t n=5;
	int* px = new int[n]; // size may be dynamic, >= 0
	for (size_t i = 0; i != n; ++i) {		//non usare begin/end
		px[i] = (i + 1) * (i + 1);
		cout<< px[i] <<endl;
	}
	delete[] px;

	system("pause");
	return 0;
}
