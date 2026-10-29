// Exercício 2: Faça um programa que cria um array bidimensional de inteiros, 
// preenche-o com quaisquer valores e inverte as posições deste array.

#include<stdio.h>

int main(){
    int numeros[5][4] = {
        {3, 4, 5, 7},
        {3, 4, 0, 1},
        {0, 1, 9, 7},
        {3, 4, 6, 7},
        {6, 4, 2, 0},
    }, numAux, linhas = 5, colunas = 4;

    printf("Normal:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", numeros[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            numAux = numeros[linhas][colunas];
            numeros[linhas][colunas] = numeros[i][j];
            numeros[i][j] = numAux;
            colunas--;
            linhas--;
        }
    }

    printf("\nAlterado:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", numeros[i][j]);
        }
        printf("\n");
    }
    return 0;
}