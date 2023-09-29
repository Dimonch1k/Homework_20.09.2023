#pragma once
#include <iostream>
using namespace std;


#include "Shape.h"
class Rectangle :
    public Shape
{
private:
    double rec1;
    double rec2;

public:
    Rectangle(double rec1, double rec2);
    double area() override;

    void display() override;
};

