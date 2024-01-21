#include <iostream>

void initializeArray(int array[], int arraySize)
{
  for (int i = 1; i <= arraySize; i++)
  {
    array[i] = i;
  }
};

void printArray(int array[], int arraySize)
{
  for (int i = 1; i <= arraySize; i++)
  {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;
};