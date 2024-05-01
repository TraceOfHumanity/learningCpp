#include <iostream>

void Change(int *a){
  *a = 10;
}

int main()
{
  int a = 5;
  Change(&a);
  std::cout << a << std::endl;

  return 0;
}
