#include <iostream>

struct Point
{
  int x;
  int y;
};

int main()
{
  Point p1 = {1, 2};

  Point *ptr = &p1;

  std::cout << "p1: " << p1.x << ", " << p1.y << std::endl;
  std::cout << "ptr: " << ptr->x << ", " << ptr->y << std::endl;
  std::cout << "(*ptr).x: " << (*ptr).x << std::endl;


  return 0;
}