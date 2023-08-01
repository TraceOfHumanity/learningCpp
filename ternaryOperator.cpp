#include <iostream>

void main() {
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	int max = (v1 > v2) ? v1 : v2;

	std::cout << "max = " << max << std::endl;
	return;
}
