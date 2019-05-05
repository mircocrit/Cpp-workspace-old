#include <iostream>
#include <vector>
using namespace std;

class Fibonacci2 {
	public:
		Fibonacci2();
		unsigned int value(unsigned int n) const;
	private:
		mutable vector <unsigned int> values;
};

Fibonacci2::Fibonacci2() {	//di default calcolo il fibonacci di passo 2
	values.push_back(1);
	values.push_back(1);
}
//ad esempio di passo 4: 1 1 2 3--> stampa 3

unsigned int Fibonacci2::value(unsigned int n) const {
	if (n < values.size())
		return values[n];
	for (unsigned int i = values.size(); i <= n; ++i)
		values.push_back(values[i-1] + values[i-2]);
	return values[n];
}
