#include <iostream>

int main()
{
  int number = 0;

  do
  {
    std::cout << "Enter a number (or negative for exit): ";
    std::cin >> number;

    if (number > 0)
    {
      std::cout << "Square is: " << number * number << std::endl;
    }
  } while (number < 10);
  return 0;
}
