#include <iostream>

double ToCube(double number);

int main()
{
  int a = 4;

  int *p = &a;

  int** pp = &p;

  std::cout << "a = " << &a << std::endl;
  std::cout << "*p = " << &p << std::endl;
  std::cout << "**pp = " << &pp << std::endl;

  return 0;
}
