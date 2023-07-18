#include <iostream>

int main()
{
	std::cout << "Enter two numbers:";
	int num1, num2;
	std::cin >> num1 >> num2;

	int sum = num1 + num2;

	std::cout << num1 << " + " << num2 << " = " << sum << std::endl;

	return 0;
}
