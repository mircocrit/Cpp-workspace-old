#ifndef TRIANGLE_H_
#define TRIANGLE_H_

class Triangle {
    public:
        Triangle(sideLength side): s(side), n(3) {}; // costruttore
        sideLength getSide() { return s;}
        sideLength perimeter() { return n * s;}
        double area() { return sqrt(3.0) *getSide() * getSide() / 4.0;}
    private:
        sideLength s;
        const numSides n;
};

#endif /* TRIANGLE_H_ */
