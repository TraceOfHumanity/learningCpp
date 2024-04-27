#include <iostream>

void Fill(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    arr[i] = i;
  }
}


void Show(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    std::cout << arr[i] << std::endl;
  }
}

int mainFunction()
{
  int size = 20;
  int arr[size];

  Fill(arr, size);
  Show(arr, size);

  return 0;
}
