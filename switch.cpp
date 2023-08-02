#include <iostream>

void main() {
	int number = 10;

	switch (number)
	{
	case 1:
		std::cout << "One" << std::endl;
		break;
	case 2:
		std::cout << "Two" << std::endl;
		break;
	case 10:
		std::cout << "Ten" << std::endl;
		break;
	default:
		std::cout << "Default" << std::endl;
		break;
	}
	return;
}
