#include <iostream>

int main()
{
  int var = 10;
  const int CONST = 20;

  int* p1 = &var;
  int& ref = var;

  *p1 = 100;
  std::cout << "var: " << var << std::endl;
  std::cout << "*p1: " << *p1 << std::endl;
  ref = 200;

  std::cout << "ref: " << ref << std::endl;

  return 0;
}