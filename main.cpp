#include <iostream>
#include <cstdlib>
#include <ctime>

void InitializeArray(char array[], int size);
void ShowArray(char array[], int size);

int main()
{
    // srand((unsigned)time(nullptr));
    const int size = 26;
    char alphabet[size];

    InitializeArray(alphabet, size);
    ShowArray(alphabet, size);

    return 0;
}

void InitializeArray(char array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        array[i] = 'A' + i;
    }
}

void ShowArray(char array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
