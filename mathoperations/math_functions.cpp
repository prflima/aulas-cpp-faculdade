#include <iostream>

int main()
{
    int firstNumber;
    int secondNumber;

    std::cout << "Digite o primeiro número: ";
    std::cin >> firstNumber;

    std::cout << "Digite o segundo número: ";
    std::cin >> secondNumber;

    int sum = firstNumber + secondNumber;
    int sub = firstNumber - secondNumber;
    int mul = firstNumber * secondNumber;
    int div = firstNumber / secondNumber;
    float fdiv = (float)firstNumber / (float)secondNumber;
    int res = firstNumber % secondNumber;
}