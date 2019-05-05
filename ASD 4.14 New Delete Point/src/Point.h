#ifndef POINT_H_
#define POINT_H_

class Point {
	public:
		using coord_t = unsigned int;//Alias di tipo pubblico

		Point(coord_t ix, coord_t iy);		//
		coord_t get_x() const;		//getter
		coord_t get_y() const;
		void move_to(coord_t new_x, coord_t new_y);		//setter
	private:
		coord_t x;
		coord_t y;
};

Point::Point(coord_t ix, coord_t iy) : x(ix), y(iy) {}
Point::coord_t Point::get_x() const {return x; }
Point::coord_t Point::get_y() const {return y; }
void Point::move_to(coord_t new_x, coord_t new_y) {x = new_x;		y = new_y;}

#endif /* POINT_H_ */
