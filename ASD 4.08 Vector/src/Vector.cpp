#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector <string> v;
	string word;
	cout<<"Premere Ctrl+Z e premere invio per terminare"<<endl;
	while (cin >> word)
		v.push_back(word);
	for (int i = v.size() - 1; i >= 0; --i)
		cout << v[i] << endl;		//V INDEX
	system("pause");
	return 0;
}
/* I vector possono essere copiati
– V1 = V2
 e confrontati
– V1 == V2
**/
