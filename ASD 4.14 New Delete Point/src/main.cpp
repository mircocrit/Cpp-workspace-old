#include <iostream>
#include "Point.h"

using namespace std;

	//OPERATORI NEW - DELETE
	//void* operator new(size_t bytes);
	//void operator delete(void* p) noexcept;

int main() {
	Point* p = new Point(10,20);// allocate raw memory, initialize the object


	//Point* p = static_cast<Point*>(::operator new(sizeof(Point)));		//EQUIVALENT
	//p->Point::Point(10, 20);
	delete p;	// destruct the object, free memory

	//p->~Point();				//EQUIVALENT
	//::operator delete(p);
	system("pause");
	return 0;
}
