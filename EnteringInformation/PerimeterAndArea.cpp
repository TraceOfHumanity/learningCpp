#include <iostream>

int main()
{
	std::cout << "Enter sides fo square: " << std::endl;
	int size1, side2;
	std::cin >> size1 >> side2;

	int perimeter = 2 * (size1 + side2);
	std::cout << "Perimeter: " << perimeter << std::endl;

	int area = size1 * side2;
	std::cout << "Area: " << area << std::endl;
}
