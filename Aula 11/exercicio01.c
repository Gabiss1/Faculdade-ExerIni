#include <stdio.h>

// Memória contígua --> O Array ocupa a memória de forma sequencial

// Programa que cria um array de doubles com 10 posições e preenche com valores do teclado

int main()
{
    double array[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%lf", &array[i]);
    }

    for (int j = 0; j < 10; j++)
    {
        printf("\nPosicao %d\nValor: %.2lf\n", j, array[j]);
    }

    return 0;
}
