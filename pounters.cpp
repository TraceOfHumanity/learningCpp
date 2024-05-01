
#include <iostream>

void InitializeArray(int array[], int size);
void ShowArray(int array[], int size, void (*showElement)(int element));
void ShowElement(int element);
void ShowElementInBrackets(int element);
void ShowElementInSquareBrackets(int element);

int pointers()
{
  const int SIZE = 10;
  int array[SIZE];

  InitializeArray(array, SIZE);
  ShowArray(array, SIZE, ShowElement);
  ShowArray(array, SIZE, ShowElementInBrackets);
  ShowArray(array, SIZE, ShowElementInSquareBrackets);

  return 0;
}

void InitializeArray(int array[], int size){
  for(int i = 0; i < size; i++){
    array[i] = i;
  }
}

void ShowArray(int array[], int size, void (*showElement)(int element)){
  for(int i = 0; i < size; i++){
    showElement(array[i]);
  }
  std::cout << std::endl;
}

void ShowElement(int element){
    std::cout << element << " ";
}

void ShowElementInBrackets(int element){
  std::cout << "(" << element << ") ";
}

void ShowElementInSquareBrackets(int element){
  std::cout << "[" << element << "] ";
}
