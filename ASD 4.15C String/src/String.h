#include <iostream>
#include <cstring>
#include <string>

//classe che alloca e dealloca memoria

class String {
	public:
		String(const char* s) : chars(new char[strlen(s) + 1]) 			{strcpy(chars, s); }	// copy s to chars

		//copia piu profonda: costruttore di copia non invocato se passato per riferimento
		String(const String& rhs): chars(new char[strlen(rhs.chars) + 1]) 		{strcpy(chars, rhs.chars);}//COSTRUTTORE DI COPIA
		~String() {
			delete[] chars;
			std::cout<<"Distruttore invocato"<<std::endl;}
		String& operator=(const String&);
	public:
		char *chars;
};

String& String::operator=(const String& rhs) {
	if (&rhs == this) {
		return *this;
	}
	delete[] chars;

	chars = new char[strlen(rhs.chars) + 1];
	strcpy(chars, rhs.chars);
	return *this;
}
