#include <iostream>

int breakFunction()
{
  int criticalNumber = 5;
  int min, max;
  
  std::cout << "Enter the minimum value: " << std::flush;
  std::cin >> min;

  std::cout << "Enter the maximum value: " << std::flush;
  std::cin >> max;

  for (int i = min; i <= max; i++)
  {
    if (i == criticalNumber)
    {
      std::cout << "Critical number reached!" << std::endl;
      break;
    }
    std::cout << "i: " << i << std::endl;
  }

  return 0;
}
