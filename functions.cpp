#include <iostream>

int Add(int a, int b)
{
  return a + b;
}

double toCube(double a)
{
  return a * a * a;
}

int main()
{
  int a = 5;
  int b = 10;

  std::cout << Add(a, b) << std::endl;
  std::cout << "cube: " << toCube(a) << std::endl;

  return 0;
}