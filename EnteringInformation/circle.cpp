#include <iostream>

int main()
{
	std::cout << "Enter the radius of the circle: ";
	double radius;
	std::cin >> radius;

	double diameter = radius * 2;
	const double PI = 3.14159;
	double area = PI * radius * radius;
	double length = 2 * PI * radius;

	std::cout << "------------circle information ------------\n" << std::endl;
	std::cout << "Radius: " << radius << std::endl;
	std::cout << "Diameter: " << diameter << std::endl;
	std::cout << "Area: " << area << std::endl;
	std::cout << "Length: " << length << std::endl;

	return 0;
}
