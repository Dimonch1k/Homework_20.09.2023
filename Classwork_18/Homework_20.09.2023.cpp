#include <iostream>
using namespace std;




#include "Drawing.h"
#include "Shape.h"

#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

int main()
{
	// Create different shapes and parametrs

	Shape* rec1 = new Rectangle(5, 6);
	Shape* rec2 = new Rectangle(2, 9);

	Shape* tri1 = new Triangle(4, 4);
	Shape* tri2 = new Triangle(7, 9);

	Shape* circle = new Circle(5);


	
	

	// Add Shapes to vector

	Drawing draw;

	draw.addShape(rec1); // Add 1 rectangle
	draw.addShape(rec2); // Add 2 rectangle
	draw.totalArea();    // Display square of all figures

	draw.addShape(tri1); // Add 1 triangle 
	draw.addShape(tri2); // Add 2 triangle
	draw.totalArea();	 // Display square of all figures


	draw.addShape(circle); // Add Circle
	draw.totalArea();	   // Display square of all figures


	draw.displayAllShapes(); // Display all Figures' squares
}



// I didn't know how to make to make the class Building with agregation