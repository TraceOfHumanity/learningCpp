#include <iostream>

union MyUnion
{
  char a;
  int b;
  float c;
};

int main()
{
  std::cout << sizeof(MyUnion) << std::endl;
  return 0;
}