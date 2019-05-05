#include <string>
using namespace std;

class class_a {
	public:
		class_a() {}
		class_a(string str) : m_string{ str } {}
		class_a(string str, double dbl) : m_string{ str }, m_double{ dbl } {}

		double m_double;
		string m_string;
};
