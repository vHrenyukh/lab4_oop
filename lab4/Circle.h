#pragma once
#include <iostream>
#include <math.h>
# define M_PI 3.14159265358979323846

using namespace std;
class Circle
{
	int r = 0;

public:
	Circle();

	Circle(int r);

	double getArea() const;

	double getLength() const;

	friend ostream& operator<<(ostream& o, const Circle& c);
};

