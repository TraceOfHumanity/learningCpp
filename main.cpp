#include <iostream>

template <typename T>
void Show(const T arr[], int size);

int main()
{
    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    double arr2[size] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char arr3[size] = {'a', 'b', 'c', 'd', 'e'};

    Show(arr, size);
    Show(arr2, size);
    Show(arr3, size);

    return 0;
}

template <typename T>
void Show(const T arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}