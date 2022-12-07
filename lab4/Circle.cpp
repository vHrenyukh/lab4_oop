#include "Circle.h"

Circle::Circle()
{
}

Circle::Circle(int r)
{
	this->r = r;
}

double Circle::getArea() const
{
	 
	return M_PI * pow(r,2);
}

double Circle::getLength() const
{
	return 2 * M_PI * r;
	
}

ostream& operator<<(ostream& o, const Circle& c)
{
	o << "Circle r: " << c.r << endl
		<< "Circle area: " << c.getArea() << endl
		<< "Circle length: " << c.getLength();
	return o;
}
