#include <iostream>

int CountLength(const char *str)
{
  int count = 0;
  while (*str != '\0')
  {
    count++;
    str++;
  }
  return count;
}

int pointers2()
{
  const char STR[] = "Hello, World!";
  std::cout << CountLength(STR) << std::endl;

  return 0;
}
