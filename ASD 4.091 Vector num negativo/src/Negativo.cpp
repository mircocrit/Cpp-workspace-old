//ES: ricerca 1 numero negativo nella seconda meta dell'array

#include <iostream>
#include <vector>
#include <string>

using namespace std;

//ARITMETICA ITERATORI
int main() {
	vector <int> v={1,-2,3,3,3,2,-1};
	auto it = v.begin() + v.size() / 2; // midpoint
	while (it != v.end() && *it >= 0)
		++it;
	if (it != v.end())
		cout << "Found at index " << it - v.begin() << endl;
	else
		cout << "Not found" << endl;
	system("pause");
	return 0;
}

/*	//vec.push_back(10);
	//vec.push_back(20);
	for (int i : vec ){
    	cout << i;
	}
*/
