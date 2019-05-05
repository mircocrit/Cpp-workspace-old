#ifndef COUNTED_H_
#define COUNTED_H_

class Counted {
	public:
		Counted(){++nbrObj;}
		~Counted(){--nbrObj;}
		static unsigned int getNbrObj() {return nbrObj;}		//getter
	private:
		static unsigned int nbrObj;
	};

#endif /* COUNTED_H_ */
