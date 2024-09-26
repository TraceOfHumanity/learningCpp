#include <iostream>

int main()
{
  std::cout << "------Character------\n";
  std::cout << "Char: " << sizeof(char) << " bytes\n";
  std::cout << "WChar_t: " << sizeof(wchar_t) << " bytes\n";
  std::cout << "Char16_t: " << sizeof(char16_t) << " bytes\n";
  std::cout << "Char32_t: " << sizeof(char32_t) << " bytes\n";
  
  return 0;
}