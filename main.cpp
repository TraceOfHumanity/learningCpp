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

  Point* p = &p1;

  std::cout << p->x << std::endl;

  return 0;
}