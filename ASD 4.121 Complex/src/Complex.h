#ifndef COMPLEX_H_
#define COMPLEX_H_

class Complex {
	public:
		Complex(double r, double i) : re(r), im(i) {};
		Complex(double r) : Complex(r, 0) {}; 		//delega=OVERLOADING a costruttore num 1
		Complex() : Complex(0, 0) {};
		int get_re() const	{return re; };			//getter
		int get_im() const 	{return im; };

	private:
		int re;
		int im;
};

#endif /* COMPLEX_H_ */
