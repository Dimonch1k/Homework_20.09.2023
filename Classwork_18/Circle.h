#pragma once
#include <iostream>
using namespace std;


const double PI = 3.14;

#include "Shape.h"
class Circle :
    public Shape
{
private:
    double radius;

public:
    Circle(double radius);
    double area() override;

    void display() override;
};

