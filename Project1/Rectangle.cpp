#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(int length, int width)
{
	this->length = length;
	this->width = width;
}

void Rectangle::print()
{
	cout << "* * * * * * * * * * * * * * * * *" << endl;
	cout << "*                               *" << endl;
	cout << "*                               *" << endl;
	cout << "*                               *" << endl;
	cout << "*                               *" << endl;
	cout << "*                               *" << endl;
	cout << "*                               *" << endl;
	cout << "*                               *" << endl;
	cout << "* * * * * * * * * * * * * * * * *" << endl;
}

int Rectangle::getArea()
{
	return (width*length);
}
