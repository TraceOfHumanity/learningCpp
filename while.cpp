#include <iostream>

int whileFunction()
{
  int count = 0;

  while (count < 10)
    std::cout << count++ << " ";

  return 0;
}
