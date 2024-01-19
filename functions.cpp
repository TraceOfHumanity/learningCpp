#include <iostream>

int Add(int a, int b)
{
  return a + b;
}

int main()
{
  int a = 5;
  int b = 10;

  std::cout << Add(a, b) << std::endl;

  return 0;
}