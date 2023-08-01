#include <iostream>

void main() {
	std::cout << "Enter two numbers:" << std::endl;
	int number;
	std::cin >> number;

	if (number % 2 == 0) {
		std::cout << "The number is even." << std::endl;
	}
	else {
		std::cout << "The number is odd." << std::endl;
	}
	return;
}
