#include <iostream>

int continueFunction()
{
  int sum = 0;
  int num;

  do{
    std::cout << "Enter positive number (or 0 to exit): ";
    std::cin >> num;

    if (num < 0)
    {
      std::cout << "Negative number is not allowed." << std::endl;
      continue;
    }

    sum += num;
  } while (num != 0);

  std::cout << "Sum of all positive numbers entered is: " << sum << std::endl;

  return 0;
}
