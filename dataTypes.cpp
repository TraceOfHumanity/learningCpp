#include <iostream>

int main()
{
  std::cout << "------Character------\n";
  std::cout << "Char: " << sizeof(char) << " bytes\n";
  std::cout << "WChar_t: " << sizeof(wchar_t) << " bytes\n";
  std::cout << "Char16_t: " << sizeof(char16_t) << " bytes\n";
  std::cout << "Char32_t: " << sizeof(char32_t) << " bytes\n";

  std::cout << std::endl;

  std::cout << "------Integer------\n";
  std::cout << "Short: " << sizeof(short) << " bytes\n";
  std::cout << "Unsigned Short: " << sizeof(unsigned short) << " bytes\n";
  std::cout << "Int: " << sizeof(int) << " bytes\n";
  std::cout << "Unsigned Int: " << sizeof(unsigned int) << " bytes\n";
  std::cout << "Long: " << sizeof(long) << " bytes\n";
  std::cout << "Unsigned Long: " << sizeof(unsigned long) << " bytes\n";
  std::cout << "Long Long: " << sizeof(long long) << " bytes\n";
  std::cout << "Unsigned Long Long: " << sizeof(unsigned long long) << " bytes\n";

  std::cout << std::endl;

  std::cout << "------Floating Point------\n";
  std::cout << "Float: " << sizeof(float) << " bytes\n";
  std::cout << "Double: " << sizeof(double) << " bytes\n";
  std::cout << "Long Double: " << sizeof(long double) << " bytes\n";

  std::cout << std::endl;

  std::cout << "------Boolean------\n";
  std::cout << "Bool: " << sizeof(bool) << " bytes\n";

  return 0;
}