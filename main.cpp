#include <iostream>

int main()
{
    int *ptr = new int{5};
    const int *const ptr2 = new int{10};
    int **ptr3 = new int *{nullptr};

    std::cout << *ptr << std::endl;
    std::cout << *ptr2 << std::endl;
    std::cout << *ptr3 << std::endl;

    delete ptr;
    delete ptr2;
    delete ptr3;

    std::cout << *ptr << std::endl;
    std::cout << *ptr2 << std::endl;
    std::cout << *ptr3 << std::endl;
    return 0;
}
