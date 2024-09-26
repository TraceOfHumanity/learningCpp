#include <iostream>
#define SHOW_STRING(str) std::cout << "Hello " #str << std::endl;

// using namespace std;

int main()
{
  SHOW_STRING(123)
  return 0;
}
