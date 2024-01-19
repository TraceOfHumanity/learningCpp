#include <iostream>

void Show(const int arr[], int size);
void Show(const char str[]);

int main()
{
  int arr[] = {1, 2, 3, 4};
  char str[] = "Hello";

  Show(arr, 3);
  Show(str);

  return 0;
}

void Show(const int arr[], int size)
{
  std::cout << "Numbers:" << std::endl;

  for (int i = 0; i < size; i++)
  {
    // std::cout << arr[i] << std::endl;
    if (i != size - 1)
      std::cout << arr[i] << ",";
    else
      std::cout << arr[i] << std::endl;
  }
};

void Show(const char str[])
{
  std::cout << "String:" << std::endl;
  std::cout << str << std::endl;
};