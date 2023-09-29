#include "Rectangle.h"


Rectangle::Rectangle(double rec1, double rec2)
{
	this->rec1 = rec1;
	this->rec2 = rec2;
}


double Rectangle::area()
{
	return rec1 * rec2;
}


void Rectangle::display()
{
	cout << " Rectangle area is: " << area() << "\n";
}