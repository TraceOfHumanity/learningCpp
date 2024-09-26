#include <iostream>
#define SHOW_STRING(str) std::cout << "Hello " #str << std::endl;
#define CONCAT(a, b) a##b

int main()
{
  SHOW_STRING(123)
  std::cout << CONCAT(1, 2) << std::endl;
  return 0;
}
