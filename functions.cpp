#include <iostream>


int main () {
  const int size = 5;

  int arr1[size], arr2[size * 2];

  for(int i = 0; i < size; i++) {
    arr1[i] = i;
  }

  for(int i = 0; i < size * 2; i++) {
    if(i < size) {
      arr2[i] = arr1[i];
    } else {
      arr2[i] = i;
    }
  }

  for(int i = 0; i < size; i++) {
    std::cout << arr1[i] << std::endl;
  }
    std::cout << "====================" << std::endl;

  for(int i = 0; i < size * 2; i++) {
    std::cout << arr2[i] << std::endl;
  }

  return 0;
}