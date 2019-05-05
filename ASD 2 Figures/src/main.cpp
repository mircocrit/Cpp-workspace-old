typedef int numSides;
typedef int sideLength;
//side=lungh lati//

#include <iostream>
#include <math.h>
#include "Triangle.h"
#include "Square.h"

using namespace std;

int main(){
	int lunghezza;
	cout<<"Lunghezza lato quadrato-->"<<endl;
	cin>>lunghezza;
    Square square1(lunghezza);
    square1.perimeter();
    square1.area();
    cout<<"Perimetro"<< square1.perimeter() <<endl;
    cout<<"Area"<< square1.area() <<endl;

    int lunghezza_t;
    cout<<"Lunghezza lato triangolo-->"<<endl;
    cin>>lunghezza_t;
    Triangle trinagle(lunghezza_t);
    trinagle.area();
    cout<< trinagle.perimeter()<<endl;
    cout<< trinagle.area()<<endl;

    system("pause");
}
