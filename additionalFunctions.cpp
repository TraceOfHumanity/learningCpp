#include <iostream>
#include <ctime>

void initializeArray(int array[], int arraySize)
{
  for (int i = 0; i <= arraySize; i++)
  {
    array[i] = i;
  }
};

void printArray(int array[], int arraySize)
{
  for (int i = 0; i <= arraySize; i++)
  {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;
};

int linearSearch(int array[], int arraySize, int find, bool isFind = false)
{
  for (int i = 0; i <= arraySize; i++)
  {
    if (array[i] == find)
    {
      isFind = true;
      std::cout << "Found " << find << " at index " << i << std::endl;
      return i;
    }
  }
  return -1;
}

void initializeArrayRandom(int array[], int arraySize)
{
  srand(static_cast<unsigned>(time(nullptr)));
  for (int i = 0; i <= arraySize; i++)
  {
    array[i] = rand() % 100 + 1;
  }
};

int sortSelection(int array[], int arraySize)
{
  int minIndex = 0;
  for (int i = 0; i <= arraySize; i++)
  {
    minIndex = i;
    for (int j = i + 1; j <= arraySize; j++)
    {
      if (array[j] < array[minIndex])
      {
        minIndex = j;
      }
    }
    std::swap(array[i], array[minIndex]);
  }
  std::cout << "Sorted Selection array: ";
  printArray(array, arraySize);
  return 0;
};

int sortBubble(int array[], int arraySize)
{
  for (int i = 0; i <= arraySize; i++)
  {
    for (int j = 0; j <= arraySize - i - 1; j++)
    {
      if (array[j] > array[j + 1])
      {
        std::swap(array[j], array[j + 1]);
      }
    }
  }
  std::cout << "Sorted Bubble array: ";
  printArray(array, arraySize);
  return 0;
};

int sortInsertion(int array[], int arraySize)
{
  int key = 0;
  int j = 0;
  for (int i = 1; i <= arraySize; i++)
  {
    key = array[i];
    j = i - 1;
    while (j >= 0 && array[j] > key)
    {
      array[j + 1] = array[j];
      j--;
    }
    array[j + 1] = key;
  }
  std::cout << "Sorted Insertion array: ";
  printArray(array, arraySize);
  return 0;
};

int factorial(int n)
{
  if (n == 0)
  {
    return 1;
  }
  else
  {
    return n * factorial(n - 1);
  }
};