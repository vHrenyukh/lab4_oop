#include "Square.h"

Square::Square()
{
}

Square::Square(int side)
{
	this->side = side;
}

double Square::getArea() const
{
	return side*side;
}

double Square::getLength() const
{
	return side*4;
}

ostream& operator<<(ostream& o, const Square& s)
{
	o << "Square side: " << s.side << endl
		<< "Square area: " << s.getArea() << endl
		<< "Square length: " << s.getLength();
	return o;
}
