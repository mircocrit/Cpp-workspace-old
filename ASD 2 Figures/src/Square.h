#ifndef SQUARE_H_
#define SQUARE_H_

class Square {
    public: // metodi accessibili da qualsiasi punto
        Square(sideLength side): s(side), n(4) {}; // costruttore: forma veloce
        sideLength getSide() { return s;}		//getter: prende il numero dei lati
        sideLength perimeter() { return n * s;}
        double area() { return (double) s * s;}
    private: // metodi accessibili da oggetti Square
        sideLength s;	//lunghezza lato quadrato
        const numSides n;
};


#endif /* SQUARE_H_ */
