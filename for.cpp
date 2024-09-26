#include <iostream>

int main()
{

  const int sizeArr = 10;
  int arr[sizeArr];

  for (int i = 0; i < sizeArr; i++)
  {
    arr[i] = i + 1;
  }

  for (int i = 0; i < sizeArr; i++)
  {
    std::cout << arr[i] << " ";
  }
  return 0;
}