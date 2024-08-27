#include <iostream>

enum Direction
{
  Up,
  Down,
  Left,
  Right
};

int main()
{

  Direction heroDirection = Up;

  switch (heroDirection)
  {
  case Up:
    std::cout << "Up" << std::endl;
    break;
  case Down:
    std::cout << "Down" << std::endl;
    break;
  }
  return 0;
}