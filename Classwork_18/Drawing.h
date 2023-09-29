#pragma once
#include <iostream>
#include <vector>
using namespace std;


#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

class Drawing
{
private:
	vector<Shape*> shapes;

public:

	void addShape(Shape* shape);

	void displayAllShapes();

	void totalArea();
};