#include <iostream>
using namespace std;

template <typename T>

class Storage{
	private:
		T m_tValue;
	public:
		Storage(T tValue) {m_tValue = tValue;}
		~Storage() { }
		void Print() {cout << m_tValue << endl;}
};
//implementation
void Storage<double>::Print(){
	cout << scientific << m_tValue << endl;
}
