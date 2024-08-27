#include <iostream>

struct Point
{
  int x;
  int y;
};

int main()
{
  Point p1 = {1, 2};

  Point copyPoint(p1);

  std::cout << "p1: " << p1.x << ", " << p1.y << std::endl;
  std::cout << "copyPoint: " << copyPoint.x << ", " << copyPoint.y << std::endl;

  return 0;
}