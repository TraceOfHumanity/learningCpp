#include <iostream>

int main()
{
  std::cout << __cplusplus << std::endl;
  std::cout << __FILE__ << std::endl;
  std::cout << __LINE__ << std::endl;
  std::cout << __DATE__ << std::endl;
  std::cout << __TIME__ << std::endl;
  std::cout << __STDCPP_THREADS__ << std::endl;
  return 0;
}