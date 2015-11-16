#include <iostream>
#include <string>
#include "./binaryArithmetic/binaryArithmetic.h"
#include "./decimalArithmetic/decimalArithmetic.h"


int main()
{
	std::string binary;
	int option;
	do {
		std::cout << "\tWelcome to CreaTed's calculator!" << std::endl;

		std::cout << "What do you want to do? \n"
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
			std::cout << "Enter the number you want to convert: " << std::endl;
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
				<< "[1] Perform a decimal addition and convert to binary \n"
				<< "[2] Perform a decimal subtraction and convert to binary  \n"
				<< "[3] Perform a decimal multiplication and convert to binary  \n"
				<< "[4] Perform a decimal division and convert to binary  \n" << std::endl;
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
				std::cout << "Please enter a valid option." << std::endl;
			}
			break;

		case 4:
			int binaryOption;
			std::cout << "Do you want to: \n"
				<< "[1] Perform a binary addition and convert to decimal \n"
				<< "[2] Perform a binary subtraction and convert to decimal  \n"
				<< "[3] Perform a binary multiplication and convert to decimal  \n"
				<< "[4] Perform a binary division and convert to decimal  \n" << std::endl;
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
				std::cout << "Please enter a valid option." << std::endl;
			}
			break;
		case 5:
			std::cout << "Thanks for using this program." << std::endl;
			break;
		default:
			std::cout << "Please enter a valid option." << std::endl;
		}

	} while (option != 5);
	
	system("PAUSE");
	return 0;
}


