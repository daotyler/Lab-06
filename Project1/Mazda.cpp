#include "Mazda.h"
#include <iostream>

using namespace std;
void Mazda::print()
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

void Mazda::drive()
{
	cout << "Driving a Mazda" << endl;
}
