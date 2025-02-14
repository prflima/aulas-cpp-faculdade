#include <iostream>
const int NUM_ELEM = 10;
int main()
{
    int vetor[NUM_ELEM];

    for (int i = 0; i < NUM_ELEM; i++)
    {
        vetor[i] = 2 * i;
        std::cout << "Atríbuido valor: " << vetor[i] << " na posicao: " << i << " do vetor \n";
    }

    return 0;
}