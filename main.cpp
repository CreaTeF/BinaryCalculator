#include <iostream>
#include <string>
#include "./binaryArithmetic/binaryArithmetic.h"
#include "./decimalArithmetic/decimalArithmetic.h"


int main()
{
	std::string binary;
	int option;
	do {
		std::cout << "\tWelcome To The CreaTed's Calculator" << std::endl;

		std::cout << "Do you want to: \n"
			<< "[1] Convert a decimal to binary \n"
			<< "[2] Convert a binary to decimal \n"
			<< "[3] Perform arithmetic operations with decimals \n"
			<< "[4] Perform arithmetic operations with binaries \n" 
			<< "[5] Exit" << std::endl;

		std::cin >> option;

		switch (option)
		{
		case 1:
			int decimal;
			std::cout << "Enter the number that you want to convert: " << std::endl;
			std::cin >> decimal;
			std::cout.precision(0);
			std::cout << "The conversion of " << decimal << " to binary is: " << std::fixed << decimalConversion(decimal) << std::endl;
			break;
		case 2:
			std::cout << "Enter the number that you want to convert: " << std::endl;
			std::cin >> binary;
			std::cout << "The conversion of " << binary << " to decimal is: "  << binaryConversion(binary) << std::endl;
			break;
		case 3:
			int decimalOption;
			std::cout << "Do you want to: \n"
				<< "[1] Realize a Decimal Addition and Convert to Binary \n"
				<< "[2] Realize a Decimal Subtraction and Convert to Binary  \n"
				<< "[3] Realize a Decimal Multiplication and Convert to Binary  \n"
				<< "[4] Realize a Decimal Division and Convert to Binary  \n" << std::endl;
			std::cin >> decimalOption;
			switch (decimalOption)
			{
			case 1:
				//decimalAddition();			//Converts the decimal addition to a binary number.
				break;
			case 2:
				//decimalSubtraction();			//Converts the decimal subtraction to a binary number.
				break;
			case 3:
				//decimalMultiplication();		//Converts the decimal multiplication to a binary number.
				break;
			case 4:
				//decimalDivision();			//Converts the decimal Division to a binary number.
				break;
			default:
				std::cout << "Enter a valid Option" << std::endl;
			}
			break;

		case 4:
			int binaryOption;
			std::cout << "Do you want to: \n"
				<< "[1] Realize a Binary Addition and Convert to Decimal \n"
				<< "[2] Realize a Binary Subtraction and Convert to Decimal  \n"
				<< "[3] Realize a Binary Multiplication and Convert to Decimal  \n"
				<< "[4] Realize a Binary Division and Convert to Decimal  \n" << std::endl;
			std::cin >> binaryOption;
			switch (decimalOption)
			{
			case 1:
				//binaryAddition();				//Converts the binary addition to a decimal number.
				break;
			case 2:
				//binarySubtraction();			//Converts the binary subraction to a decimal number.
				break;
			case 3:
				//binaryMultiplication();		//Converts the binary multiplication to a decimal number.
				break;
			case 4:
				//binaryDivision();				//Converts the binary division to a decimal number.
				break;
			default:
				std::cout << "Enter a valid Option" << std::endl;
			}
			break;
		case 5:
			std::cout << "Thanks for use this program" << std::endl;
			break;
		default:
			std::cout << "Enter a valid option" << std::endl;
		}

	} while (option != 5);
	
	system("PAUSE");
	return 0;
}


