#include <iostream>
#include <vector>
#include <string>

using namespace std;
//ITERATORI

int main() {
	vector <int> v={1,2,3,3,3,2,1};
	//1)ITERATOR STANDARD
	for (vector<int>::iterator it = v.begin();	it != v.end(); ++it){	//vector<int>::iterator e' un tipo
		*it = 0;
		cout<<*it<<"  ";
	}
	cout<<endl;
	//2) AUTO (C++11)
	for (auto it = v.begin(); it != v.end(); ++it){
		*it = 1;
		cout<<*it<<"  ";
	}
	cout<<endl;
	//3) RANGE-BASED (C++11)
	for (int& e : v){
		e = 2;
		cout<<e<<"  ";
	}
	cout<<endl;
	//4) NO ITERATOR
	for (int i = 0; i<v.size(); i++)
		cout << v[i] <<"  ";
	cout<<endl;
	//5) CONST ITERATOR (read only) (cbegin!=begin)
	for (auto it = v.cbegin(); it != v.cend(); ++it)
		//*it=0;			//ERRORE!
		cout <<*it<<"  ";
	cout<<endl;
	system("pause");
	return 0;
}
