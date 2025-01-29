#include <iostream>

int main(void)
{
    int firstNumber;
    int counter = 0;
    int amount = 0;

    while (counter < 10)
    {
        std::cout << "Digite um numero (" << counter << ")" << std::endl;
        std::cin >> firstNumber;

        if (firstNumber < 5)
        {
            amount++;
        }

        counter++;
    }

    return 0;
}