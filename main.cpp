#include <iostream>
void Show(const char *str);

int main()
{
    const char str[] = "Hello World!";
    Show(str);
    return 0;
}

void Show(const char *str)
{
    while (*str != '\0')
    {
        std::cout << *str << " ";
        str++;
    }
}