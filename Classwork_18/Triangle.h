#pragma once
#include <iostream>
using namespace std;


#include "Shape.h"
class Triangle :
    public Shape
{
private:
    double tri1;
    double tri2;

public:
    Triangle(double tri1, double tri2);
    double area() override;

    void display() override;
};

