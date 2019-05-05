#include <iostream>

using namespace std;

class A {
	public:
		//A(int ix) : x(ix) {} // constructor initializer
		A(int ix) { x = ix; } // assignment
		int get_x() const	{return x; };			//getter
		int get_b() const 	{return b; };			//getter
	private:
		int x = 123; // direct initialization, new in C++11
		const int b=10;
};

int main(){
	A admin(122);
	cout<<admin.get_x()<<"  "<<admin.get_b()<<endl;
	system("pause");
	return 0;
}
