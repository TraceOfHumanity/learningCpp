#include <iostream>

void Func();

int main()
{
  void (*pFunc)() = Func;

  std::cout << "pFunc: " << pFunc << std::endl;
  std::cout << "Func: " << (&Func) << std::endl;
  std::cout << "Func: " << reinterpret_cast<void*>(Func) << std::endl;

  return 0;
}

void Func()
{
  // std::cout << "Hello, World!" << std::endl;
}
