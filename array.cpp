#include <iostream>

int arr()
{
  int arr[20];

  for (int i = 0; i < 20; i++)
  {
    arr[i] = i;
  }

  for (int i = 0; i < 20; i++)
  {
    std::cout << arr[i] << std::endl;
  }

  return 0;
}
