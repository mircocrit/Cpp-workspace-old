#ifndef FIBONACCI_H_
#define FIBONACCI_H_

class Fibonacci {
	public:
		Fibonacci();		//constructor
		unsigned int value(unsigned int n) const;// al posto della private si usa un metodo
};

//implementazione fuori--> riferirsi a membro classe con class_name::

unsigned int Fibonacci::value(unsigned int n) const {
	int nbr1 = 1;
	int nbr2 = 1;
	for (unsigned int i = 2; i <= n; ++i) {
		int temp = nbr1 + nbr2;
		nbr1 = nbr2;
		nbr2 = temp;
	}
	return nbr2;
}

#endif /* FIBONACCI_H_ */
