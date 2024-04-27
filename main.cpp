#include <iostream>

int main()
{
  // int arr[20];

  // for (int i = 0; i < 20; i++)
  // {
  //   arr[i] = i;
  // }

  // for (int i = 0; i < 20; i++)
  // {
  //   std::cout << arr[i] << std::endl;
  // }

  const int WEEK = 7, DAY = 4;

  int arr[WEEK][DAY];

  for (int i = 0; i < WEEK; i++)
  {
    for (int j = 0; j < DAY; j++)
    {
      arr[i][j] = i * j;
    }
  }

  for (int i = 0; i < WEEK; i++)
  {
    for (int j = 0; j < DAY; j++)
    {
      std::cout << arr[i][j] << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
