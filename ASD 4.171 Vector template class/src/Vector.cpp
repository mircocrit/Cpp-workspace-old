#include <iostream>

template<typename T>
class Vector {
	public:
		Vector(int size) : vec(NULL) { if (size > 0) vec = new T[size]; }		//costruttore
		inline const T& Get(int i) { return vec[i]; }	//getter
		inline void Set(int i, const T& el) { vec[i] = el; }		//setter
		~Vector() { if(vec != NULL) delete[] vec; }		//distruttore
	private:
		T* vec;
};
