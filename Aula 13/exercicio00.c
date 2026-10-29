// Exercício 0: Faça um programa que cria um array bidimensional de inteiros, 
// preenche este array com quaisquer valores e imprime este array. 
// Cada linha do array deve ser impressa em uma nova linha. 
#include<stdio.h>

int main(){
    int numeros[5][4];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            numeros[i][j] = i*j+(i+j);
        }
    }

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