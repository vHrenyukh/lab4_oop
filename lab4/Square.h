#pragma once
#include <ostream>
using namespace std;
class Square
{

	int side = 0;

public:

	Square();
	Square(int side);

	double getArea() const;
	double getLength() const;

	friend ostream& operator<<(ostream& o, const Square& s);

	
};

