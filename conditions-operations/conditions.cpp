#include <iostream>

int numberOne;
int numberTwo;

int main()
{
    std::cout << "Digite o primeiro número: ";
    std::cin >> numberOne;

    std::cout << "Digite o segundo número: ";
    std::cin >> numberTwo;

    if (numberOne == numberTwo)
        std::cout << numberOne << " == " << numberTwo << std::endl;

    if (numberOne != numberTwo)
        std::cout << numberOne << " != " << numberTwo << std::endl;
}