#include <iostream>

void initializeArray(int array[], int arraySize);
void printArray(int array[], int arraySize);

int main()
{
    int arraySize = 20;
    int array[arraySize];

    initializeArray(array, arraySize);
    printArray(array, arraySize);

    bool isFind = false;
    std::cout << "Enter a number to find: ";
    int find;
    std::cin >> find;

    for (int i = 0; i <= arraySize; i++)
    {
        if (array[i] == find)
        {
            std::cout << "Found " << find << " at index " << i << std::endl;
            isFind = true;
            break;
        }
    }
};
