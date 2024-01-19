#include <iostream>
#include <cstdlib>
#include <ctime>

void Show(const int array[], int size);
void Show(const char array[], int size);

int main()
{
    srand(time(NULL));
    const int size = 10;
    const char alphabet = 26;
    int array[size];
    char array2[alphabet] = {
        'a',
        'b',
        'c',
        'd',
        'e',
        'f',
        'g',
        'h',
        'r',
        'j',
        'k',
        'l',
        'm',
        'n',
        'o',
        'p',
        'q',
        's',
        't',
        'u',
        'v',
        'w',
        'x',
        'y',
        'z'};

    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 10;
        array2[i] = 'a';
    }

    Show(array, size);
    Show(array2, alphabet);

    return 0;
}

void Show(const int array[], int size)
{
    for (int i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}

void Show(const char array[], int size)
{
    for (int i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}