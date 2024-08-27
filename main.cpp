#include <iostream>

enum class Direction
{
  Up,
  Down,
  Left,
  Right
};

int main()
{

  Direction heroDirection = Direction::Up;

  switch (heroDirection)
  {
  case Direction::Up:
    std::cout << "Up" << std::endl;
    break;
  case Direction::Down:
    std::cout << "Down" << std::endl;
    break;
  case Direction::Left:
    std::cout << "Left" << std::endl;
    break;
  case Direction::Right:
    std::cout << "Right" << std::endl;
    break;
  }
  
  return 0;
}
