#include <iostream>
#include <string>
#include <stdlib.h>

double decimalConversion(double x)
{
	int quotient = (long int)x;
	int nBinary;	
	std::string binary = "";

	while (quotient != 0)
	{
		nBinary = quotient % 2;
		if (nBinary == 1)
		{
			binary = "1" + binary;
		}
		else
		{
			binary = "0" + binary;
		}
		quotient = quotient / 2;
	}
	
	if (quotient % 2 == 1)
	{
		binary = "1" + binary;
	}
	else
	{
		binary = "0" + binary;
	}

	//converts a string to a double type number.
	double binaryNumber = atof(binary.c_str());

	return binaryNumber;
}

