#include <iostream>

int main()
{
	int min, max;
	int critical = 8;
	std::cout << "Enter min and max: ";
	std::cin >> min >> max;
	for (int i = min; i <= max; i++)
	{
		if (i == critical)
		{
			std::cout << "Critical value reached!\n";
			break;
		}
		std::cout << i << " ";
	}
	return 0;
}
