#include <iostream>

int main()
{
  int a = 3, b = 4;
  double result = static_cast<double>(a) / b;
  std::cout << "The result is: " << result << std::endl;
  return 0;
}
