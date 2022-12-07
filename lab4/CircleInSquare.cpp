#include "CircleInSquare.h"

ostream& operator<<(ostream& o, const CircleInSquare& cs)
{
	o << (Circle)cs << endl
		<< (Square)cs;
	return o;
}

CircleInSquare::CircleInSquare()
{
}

CircleInSquare::CircleInSquare(int r):Circle(r)
{
}

CircleInSquare::CircleInSquare(int r, int side) : Circle(r), Square(side)
{
	
}
