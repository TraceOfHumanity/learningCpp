#include <iostream>
#include <cstdlib>
#include <ctime>

void InitializeArray(int array[], int size);
void ShowArray(int array[], int size);

int main()
{
    srand((unsigned)time(nullptr));
    const int size = 10;
    int array[size];
    InitializeArray(array, size);
    ShowArray(array, size);

    return 0;
}

void InitializeArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        array[i] = rand();
    }
}

void ShowArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << array[i] << std::endl;
    }
}