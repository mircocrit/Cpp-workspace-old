#include <iostream>
#include <assert.h> // for assert()
using namespace std;
//CLASSE STANDARD SOLO PER INTERI
class IntArray {
	private:
		int m_nLength;
		int *m_pnData;//vettore di interi
	public:
		IntArray() {m_nLength = 0;m_pnData = 0;}//costruttore
		IntArray(int nLength) {m_pnData = new int[nLength];		m_nLength = nLength;}
		~IntArray() { delete[] m_pnData; }	//distruttore
		void Erase() {
			delete[] m_pnData;
			// We need to make sure we set m_pnData to 0 here, otherwise it will
			// be left pointing at deallocated memory!
			m_pnData = 0;
			m_nLength = 0;
		}
		int& operator[](int nIndex) {
			assert(nIndex >= 0 && nIndex < m_nLength);
			return m_pnData[nIndex];
		}
		int GetLength() { return m_nLength; }
};
