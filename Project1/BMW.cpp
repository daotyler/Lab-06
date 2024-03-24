#include "BMW.h"
#include "Car.h"
#include <iostream>
using namespace std;

void Bmw::print()
{
	cout << "   ________________________" << endl;
	cout << "  /                  |     \\" << endl;
	cout << " /                   |      \\" << endl;
	cout << "|                     -------\\" << endl;
	cout << "|                             ----" << endl;
	cout << "|                                 |" << endl;
	cout << "|    --------          --------   |" << endl;
	cout << "------ **** ------------ **** -----" << endl;
	cout << "      *    *            *    *" << endl;
	cout << "      *    *            *    *" << endl;
	cout << "       ****              ****" << endl;
}

void Bmw::drive()
{
	cout << "Driving a BMW" << endl;
}

