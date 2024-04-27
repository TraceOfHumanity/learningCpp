#include <iostream>

int rangeBasedFor()
{
  for (int value : {1, 2, 3, 4, 5})
  {
    std::cout << value << std::endl;
  }
  return 0;
}
