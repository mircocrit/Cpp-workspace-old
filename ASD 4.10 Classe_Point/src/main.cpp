#include <iostream>
#include "Point.h"

using namespace std;

int main() {
	Point punto(5,3);
	cout<<punto.get_x()<<"  "<<punto.get_y()<<endl;
	punto.move_to(4,4);
	cout<<punto.get_x()<<"  "<<punto.get_y()<<endl;
	system("pause");
	return 0;
}
