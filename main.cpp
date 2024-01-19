#include <iostream>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    bool isFound = false;
    int index = 0;
    std::cout << "Enter a number:";
    int value;
    std::cin >> value;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == value)
        {
            isFound = true;
            index = i;
            break;
        }
    }

    if (isFound)
    {
        std::cout << "Found" << std::endl;
        std::cout << "Index: " << index << std::endl;
    }
    else
    {
        std::cout << "Not Found" << std::endl;
    }

    return 0;
}
