#include "math_functions.h"
#include <iostream>


static double add(double num1, double num2) {
	return num1 + num2;
}

static double subtract(double num1, double num2) {
	return num1 - num2;
}

static double divide(double num1, double num2) {
	if (num2 != 0) {
		return num1 / num2;
	}
	else
	{
		std::cout << "Error: Division by 0\n";
		return 0;
	}
}

static double multiply(double num1, double num2) {
	return num1 * num2;
}
