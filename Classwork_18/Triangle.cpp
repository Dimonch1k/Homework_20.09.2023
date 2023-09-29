#include "Triangle.h"


Triangle::Triangle(double tri1, double tri2)
{
	this->tri1 = tri1;
	this->tri2 = tri2;
}


double Triangle::area()
{
	return tri1 * tri2 * 0.5;
}


void Triangle::display()
{
	cout << " Triangle area is: " << area() << "\n";
}