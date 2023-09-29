#include "Drawing.h"



void Drawing::addShape(Shape* shape)
{
	shapes.push_back(shape);
	cout << "The shape added successfully.\n";
}



void Drawing::displayAllShapes()
{
	cout << "All shapes: \n";
	for (int i = 0; i < shapes.size(); i++)
	{
		cout << "\t" << i + 1;
		shapes[i]->display();
	}
	cout << "\n\n";
}



void Drawing::totalArea()
{
	double result = 0.0;
	for (int i = 0; i < shapes.size(); i++)
	{
		result = result + shapes[i]->area();
	}
	cout << "Total area: " << result << "\n\n\n"; 
}