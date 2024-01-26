#include <iostream>

void Func1()
{
    std::cout << "hello" << std::endl;
};
void Func2(int a){};
void Func3(int a, int b){};
void Func4(int a, double b){};
int Func5()
{
    return 0;
};
double Func6(int a)
{
    return 0.0;
};
char Func7(int a, int b)
{
    return 'a';
};
long Func8(int a, double b)
{
    return 0;
};
void Func9(int arr[], int size){};
void Func10(const int a){};
void Func11(const int arr[], int size){};

int main()
{
    void (*pFunc1)() = Func1;
    void (*pFunc2)(int) = Func2;
    void (*pFunc3)(int, int) = Func3;
    void (*pFunc4)(int, double) = Func4;
    int (*pFunc5)() = Func5;
    double (*pFunc6)(int) = Func6;
    char (*pFunc7)(int, int) = Func7;
    long (*pFunc8)(int, double) = Func8;
    void (*pFunc9)(int[], int) = Func9;
    void (*pFunc10)(const int) = Func10;
    void (*pFunc11)(const int[], int) = Func11;

    Func1();
    (*pFunc1)();

    // std::cout << "pFunc1: " << &pFunc1 << std::endl;
    // std::cout << "pFunc2: " << &pFunc2 << std::endl;
    // std::cout << "pFunc3: " << &pFunc3 << std::endl;
    // std::cout << "pFunc4: " << &pFunc4 << std::endl;
    // std::cout << "pFunc5: " << &pFunc5 << std::endl;
    // std::cout << "pFunc6: " << &pFunc6 << std::endl;
    // std::cout << "pFunc7: " << &pFunc7 << std::endl;
    // std::cout << "pFunc8: " << &pFunc8 << std::endl;
    // std::cout << "pFunc9: " << &pFunc9 << std::endl;
    // std::cout << "pFunc10: " << &pFunc10 << std::endl;
    // std::cout << "pFunc11: " << &pFunc11 << std::endl;

    return 0;
}
