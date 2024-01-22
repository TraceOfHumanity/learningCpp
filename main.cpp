#include <iostream>

void printArray(int array[], int arraySize);
void initializeArrayRandom(int array[], int arraySize);
int sortSelection(int array[], int arraySize);
int sortBubble(int array[], int arraySize);
int sortInsertion(int array[], int arraySize);

int main()
{
    int arraySize = 20;
    int array2[arraySize];

    initializeArrayRandom(array2, arraySize);
    printArray(array2, arraySize);

    // sortSelection(array2, arraySize);
    // sortBubble(array2, arraySize);
    sortInsertion(array2, arraySize);
};
