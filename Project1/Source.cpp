//Group 20 - Tyler, Henil - Lab 04

#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "Shape.h"
#include "Function.h"
#include "BMW.h"
#include"Mazda.h"
#include "Car.h"

using namespace std;
int main() {
	Rectangle rec(3, 5);
	draw(rec);
	cout << "The area of rectangle is: " << rec.getArea() << endl;

	Circle cir(10);
	draw(cir);
	cout << "The area of circle is: " << cir.getArea() << endl;

	Bmw bmw;
	draw(bmw);
	drive(bmw);

	Mazda mazda;
	draw(mazda);
	drive(mazda);
}