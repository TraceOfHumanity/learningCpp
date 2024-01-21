#include <iostream>

void initializeArray(int array[], int arraySize);
void printArray(int array[], int arraySize);

int main()
{
    int arraySize = 20;
    int array[arraySize];

    initializeArray(array, arraySize);
    printArray(array, arraySize);
};
