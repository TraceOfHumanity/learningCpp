#include <iostream>

struct Point
{
  int x;
  int y;
};

int main()
{
  Point p1 = {1, 2};
  Point p2 = {3, 4};

  std::cout << p1.x << std::endl;
  std::cout << p2.x << std::endl;

  return 0;
}