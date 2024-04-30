#include <iostream>

int main()
{
  int a = 5;
  double b = 3.14;

  void *ptr = &a;

  std::cout << "&a: " << &a << std::endl;
  std::cout << "ptr: " << ptr << std::endl;
  std::cout << "*ptr: " << *(int *)ptr << std::endl;

  ptr = &b;

  std::cout << "&b: " << &b << std::endl;
  std::cout << "ptr: " << ptr << std::endl;
  std::cout << "*ptr: " << *(double *)ptr << std::endl;

  return 0;
}
