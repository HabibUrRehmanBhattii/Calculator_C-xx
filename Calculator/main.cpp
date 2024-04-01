#include <iostream>
#include "math_functions.h"
#include "math_functions.cpp"

int main() {
	char choice;
	double num1, num2;

	do
	{
		std::cout << "Choose and operation\n ";
		std::cout << "1: Addition\n ";
		std::cout << "2: Subtraction\n ";
		std::cout << "3: Dividion\n ";
		std::cout << "4: Multiplication\n ";
		std::cout << "5: Exit!\n ";
		std::cout << "Enter your choice\n ";
		std::cin >> choice;
		//Performe action
		switch (choice - '0')
		{
		case 1:
			std::cout << "Enter two numbers: ";
			std::cin >> num1 >> num2;
			std::cout << "Result : " << add(num1, num2) << std::endl;
			break;
		
		case 2:
			std::cout << "Enter two numbers\n";
			std::cin >> num1 >> num2;
			std::cout << "Result : " << subtract(num1 , num2) << std::endl;
			break;

		case 3:
			std::cout << "Enter two numbers\n";
			std::cin >> num1 >> num2;
			std::cout << "Result : " << divide(num1, num2) << std::endl;
			break;

		case 4:
			std::cout << "Enter two numbers\n";
			std::cin >> num1 >> num2;
			std::cout << "Result : " << multiply(num1, num2) << std::endl;
			break;

		default:
			std::cout << "Invaild Choice.\n ";
		}

	} while (choice != '5');
}
