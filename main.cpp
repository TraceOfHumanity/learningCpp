#include <iostream>

double ToCube(double number);

int main()
{
  int a = 4;

  int *p = &a;

  std::cout << "a = " << a << std::endl;
  std::cout << "&a = " << &a << std::endl;
  std::cout << "p = " << p << std::endl;
  std::cout << "*p = " << *p << std::endl;

  *p = 5;

  std::cout << "a = " << a << std::endl;
  std::cout << "&a = " << &a << std::endl;
  std::cout << "p = " << p << std::endl;
  std::cout << "*p = " << *p << std::endl;
  return 0;
}
