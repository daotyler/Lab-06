#include "Circle.h"
#include "Constant.h"
#include <iostream>
using namespace std;

Circle::Circle(int diameter)
{
	this->diameter = diameter;
}

void Circle::print()
{
	cout << "      * * * * * * * *" << endl;
	cout << "    *                 *" << endl;
	cout << "  *                     *" << endl;
	cout << "*                         *" << endl;
	cout << "*                         *" << endl;
	cout << "*                         *" << endl;
	cout << "*                         *" << endl;
	cout << "*                         *" << endl;
	cout << "*                         *" << endl;
	cout << "*                         *" << endl;
	cout << "  *                     *" << endl;
	cout << "    *                 *" << endl;
	cout << "      * * * * * * * *" << endl;
}

int Circle::getArea()
{
	return ((diameter/2)*(diameter / 2)*PI);
}
