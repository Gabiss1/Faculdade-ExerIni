// Exercício 1: Faça um programa que cria um array bidimensional de inteiros, preenche este array com quaisquer valores e imprime-o ao contrário.
// Cada linha do array deve ser impressa em uma nova linha.
#include<stdio.h>

int main(){
    int numeros[5][4];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            numeros[i][j] = j;
        }
    }

    printf("Normal:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", numeros[i][j]);
        }
        printf("\n");
    }

    printf("Invertido:\n");
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 3; j >= 0; j--)
        {
            printf("%d ", numeros[i][j]);
        }
        printf("\n");
    }

    printf("Último: %d", numeros[4][3]);

    return 0;
}