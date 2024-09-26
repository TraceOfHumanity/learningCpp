#include <iostream>
#define CONCAT(a, b) a##b
#define TO_STRING(a) #a

int main()
{
  std::cout << CONCAT(1, 2) << std::endl;
  std::cout << TO_STRING(123) << std::endl;
  return 0;
}

