#include <iostream>

using namespace std;

int main() {
	 double d = 35.67;
	 int x = d; // x == 35; implicit
	 x= static_cast<int>(d);
	 cout<<x<<endl;
	 //dynamic_cast<type>(pointer)
	 //const_cast<type>(variable)
	 //reinterpret_cast<type>(expr)
	 system("pause");
	 return 0;
}

