#include <iostream>

int main()
{
    int *a = new int{5};

    std::cout << a << std::endl;
    std::cout << *a << std::endl;

    *a = 10;

    std::cout << a << std::endl;
    std::cout << *a << std::endl;

    return 0;
}
