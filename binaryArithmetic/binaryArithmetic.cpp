#include <iostream>
#include <string>
#include <cmath>


std::string binaryConversion(std::string binary)
{
	double decimal = 0;
	int counter = 0;

	for (int index = binary.size()-1; index > 0-1; index--)
	{
		
		if (binary.c_str()[index] == '1')
		{
			decimal += pow(2, counter);
			counter++;
		}
		else
		{
			counter++;
		}

		if (binary.c_str()[index] != 0x30 && binary.c_str()[index] != 0x31)
		{
			return "Enter a valid binary number.";
			break;
		}
	}

	//it converts a double type to string.
	return std::to_string((int)decimal);
}