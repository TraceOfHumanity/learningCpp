#include <iostream>


int main()
{
  const int size = 5;

  int arr[size] = {1, 2, 3, 4, 5};

  int *ptr = arr;

  std::cout << ptr << std::endl;
  std::cout << arr << std::endl;
  std::cout << &arr << std::endl;
  std::cout << &arr[0] << std::endl;
  return 0;
}
