#include <iostream>
#include <cstring>

using namespace std;

template <typename T, int nSize>

	class Buffer{
		private:
			T m_atBuffer[nSize];// nSize is the expression parameter,which controls the size of the array
		public:
			T* GetBuffer() { return m_atBuffer; }	//getter
			T& operator[](int nIndex) {return m_atBuffer[nIndex];}//accesso a elemento
	};
