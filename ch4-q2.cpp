#include <iostream>

double getValue(){
	std::cout << "Enter a double value: ";
	double value{};
	std::cin >> value;
	return value;
}

char getSign() {
	std::cout << "Enter +, -, *. or /: ";
	char sign{};
	std::cin >> sign;
	return sign;
}

int main()
{
	double a{ getValue() };
	double b{ getValue() };
	char sign{ getSign() };
	if (sign == '+') {
		std::cout << a << " + " << b << " is " << a + b;
	}
	return 0;
}
