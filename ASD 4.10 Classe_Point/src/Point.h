#ifndef POINT_H_
#define POINT_H_

class Point {
	public:
		using coord_t = unsigned int;				//Alias di tipo pubblico: associa a unsig int il nome di coord_t
		Point(coord_t ix, coord_t iy) : x(ix), y(iy) {}; 		//constructor
		coord_t get_x() const	{return x; };			//getter
		coord_t get_y() const 	{return y; };			//getter
		void move_to(coord_t new_x, coord_t new_y)	{x = new_x;		y = new_y;};
	private:
		coord_t x;
		coord_t y;
};

//FUNZONI MEMBRO
//OPPURE:
//void Point::move_to(coord_t new_x, coord_t new_y) 	{x = new_x;		y = new_y;}

#endif /* POINT_H_ */
