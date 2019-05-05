#include <iostream>
using namespace std;

template <typename T>
	 void swap(T& a, T& b) {	//inline
		T temp = move(a); 			// a is moved to temp, a is empty
		a = move(b); 				// but a isn’t used, instead b is moved to a, b is empty
		b = move(temp); 			// but b isn’t used, instead temp is moved to b, temp is empty but temp isn’t used, instead
	}
// destroyed

class ABC{
	public:
		ABC(float inx=0,float iny=0){x=inx;y=iny;};	//costruttore
	private:
		float x,y;
};

int main() {
	double d1=-5.5,d2=-5.9;
	ABC obj1(3,4.4),obj2(3,1.02);
	swap<int>(5,0);
	cout<<"Swapped:"<<n1<<"  "<<n2<<endl;
	cout<<n1<<n2<<endl;
	swap<double>(d1,d2);
	swap<ABC>(obj1,obj2);
	system("pause");
	return 0;
}

/*
template <typename T>
	void swapVals(T& x, T& y){
		T tmp=x;
		x=y;
		y=tmp;
	}
*/
