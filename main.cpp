#include <iostream>

void initializeArray(int array[], int arraySize);
void printArray(int array[], int arraySize);
int linearSearch(int array[], int arraySize, int find, bool isFind = false);

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

    linearSearch(array, arraySize, find, isFind);
};
