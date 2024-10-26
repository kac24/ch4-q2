#include <iostream>

//get a double value from user and return by value to main
double getValue()
{
	std::cout << "Enter a double value: ";
	double value{};
	std::cin >> value;
	return value;
}

//get a arithmetic sign from user and return by value to main
char getSign() 
{
	std::cout << "Enter +, -, *, or /: ";
	char sign{};
	std::cin >> sign;
	return sign;
}

/*get a double value from user twice, an arithmetic sign and display result if sign
 * display result if sign matches one of 4 arithmetic signs.
 * If sign is invalid, display nothing.
 */
int main()
{
	double a{ getValue() };
	double b{ getValue() };
	char sign{ getSign() };
	if (sign == '+') 
	{
		std::cout << a << " + " << b << " is " << a + b;
	}
	else if (sign == '-')
	{
		std::cout << a << " - " << b << " is " << a - b;
	}
	else if (sign == '*')
	{
		std::cout << a << " * " << b << " is " << a * b;
	}
	else if (sign == '/')
	{
		std::cout << a << " / " << b << " is " << a / b;
	}
	return 0;
}
