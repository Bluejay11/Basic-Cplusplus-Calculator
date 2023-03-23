#include <iostream>
#include "math.h"
#include "io.h"

int main()
{
	double x{ getInput() };
	double y{ getInput() };

	char z{ getCharInput() };
	
	printResult(x, y, z);

    return 0;
}
