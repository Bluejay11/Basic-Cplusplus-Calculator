#include <iostream>
#include "math.h"

void printResult(double x, double y, char z)
{
	if (z == '+')
		std::cout << x << " + " << y << " is " << x + y << "\n";
	else if (z == '-')
		std::cout << x << " - " << y << " is " << x - y << "\n";
	else if (z == '*')
		std::cout << x << " * " << y << " is " << x * y << "\n";
	else if (z == '/')
		std::cout << x << " / " << y << " is " << x / y << "\n";
	else 
		std::cout << "\n";
}
