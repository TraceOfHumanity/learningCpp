#include <iostream>

void initializeArray(int array[], int arraySize);
void printArray(int array[], int arraySize);
int linearSearch(int array[], int arraySize, int find, bool isFind = false);
void initializeArrayRandom(int array[], int arraySize);

int main()
{
    int arraySize = 20;
    int array[arraySize];
    int array2[arraySize];

    // initializeArray(array, arraySize);
    // printArray(array, arraySize);

    initializeArrayRandom(array2, arraySize);
    printArray(array2, arraySize);

    // bool isFind = false;
    // std::cout << "Enter a number to find: ";
    // int find;
    // std::cin >> find;

    // linearSearch(array, arraySize, find, isFind);
};
