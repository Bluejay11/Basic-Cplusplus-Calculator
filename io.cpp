#include <iostream>
#include "io.h"


double getInput() 
{
	std::cout << "Enter a double variable: ";
	double x{ };
	std::cin >> x;

	return x;

}

char getCharInput() 
{
	std::cout << "Enter one of the following: +, -, *, /: ";
	char x{ };
	std::cin >> x;

	return x;
}
