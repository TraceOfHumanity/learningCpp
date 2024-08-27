#include <iostream>

int main()
{
    int a = 1;
    int b = 10;
    int d = 30;
    
    const int c = 20;
    
    int * const p1 = &a;
    const int* p2 = &b;
    
    p2 = &c;
    
    
  return 0;
}
