#include <iostream>
#include "Complex.h"

using namespace std;

int main(){
	Complex c(1,4);
	cout<<c.get_re()<<"  "<<c.get_im()<<endl;
	Complex c2{1};
	cout<<c2.get_re()<<"  "<<c2.get_im()<<endl;
	//Complex *c3= new Complex();
	Complex c3;
	cout<<c3.get_re()<<"  "<<c3.get_im()<<endl;
	system("pause");
	return 0;
}
