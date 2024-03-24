#include "Function.h"
#include <iostream>

using namespace std;
void draw(Shape& shape)
{
	shape.print();
}
void draw(Car& car)
{
	car.print();
}

void drive(Car& car)
{
	car.drive();
}
