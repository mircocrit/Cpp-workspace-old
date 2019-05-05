#include <iostream>
#include <cstring>
using namespace std;

class String {
	public:
		String(const char* s) : chars(new char[strlen(s) + 1]) {strcpy(chars, s); }		//COSTRUTTORE DI COPIA SEMPLICE
		String(const String& rhs): chars(new char[strlen(rhs.chars) + 1])		 {strcpy(chars, rhs.chars);}			//COSTRUTTORE DI COPIA PROFONDO
		String(String& rhs) : chars(rhs.chars) {rhs.chars = nullptr;}	//1) COSTRUTTORE DI SPOSTAMENTO: (equivale alla swap)
		String(String&& rhs) noexcept : chars(rhs.chars) {rhs.chars = nullptr;} //2) COSTRUTTORE DI SPOSTAMENTO, con riferimento a rvalue (non lancerà alcuna eccezione)
	//RVALUE REFERENCE= &&
		//String& operator=(const String& rhs);			//OPERATORE DI ASSEGNAMENTO
		String& operator=(String&& rhs) noexcept;		//OPERATORE DI ASSEGNAMENTO PER MOVIMENTO

		~String() { delete[] chars; }		//DISTRUTTORE

	private:
		char *chars;
};

/*
String& String::operator=(const String& rhs) {
	if (&rhs == this) {
		return *this;
	}
	delete[] chars;
	chars = new char[strlen(rhs.chars) + 1];
	strcpy(chars, rhs.chars);
	return *this;
}
*/
/*
String& String::operator=(String&& rhs) noexcept {	///OPERATORE DI ASSEGNAMENTO DI SPOSTAMENTO
	if (&rhs == this) {
		return *this;
	}
	delete[] chars;
	chars = rhs.chars;
	rhs.chars = nullptr;
}
*/
