#pragma once
#include "Circle.h"
#include "Square.h"


class CircleInSquare : public Circle, public Square
{
public:
	CircleInSquare();
	CircleInSquare(int r);
	CircleInSquare(int r, int side);
	
	
	friend ostream& operator<<(ostream& o, const CircleInSquare& cs);
	
};

