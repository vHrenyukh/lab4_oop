#include "CircleInSquare.h"
#include <fstream>
int main() {
	CircleInSquare cs(5, 10);
	Circle c = cs;
	Square s = cs;

	cout << cs << endl << endl;
	cout << c << endl << endl;
	cout << s << endl << endl;

	ofstream o;
	o.open("Result.txt");

	o << cs << endl << endl;
	o << c << endl << endl;
	o << s << endl << endl;
	o.close();


	cout<< cs.Circle::getArea() << endl;
	cout << cs.Square::getArea() << endl;

}