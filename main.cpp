#include <iostream>

double ToCube (double number);

int main()
{
  double number;
  std::cout << "Enter a number: ";
  std::cin >> number;
  std::cout << "The cube of " << number << " is " << ToCube(number) << std::endl;
  
  return 0;
}
