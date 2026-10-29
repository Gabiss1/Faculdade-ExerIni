// Exercício 3: Faça um programa que cria um array bidimensional de inteiros, preenche-o com quaisquer valores e 
// cria um novo array unidimensional que contém somente os valores pares do array criado.
#include<stdio.h>

int main(){
    int numeros[5][4] = {
        {3, 4, 5, 7},
        {3, 4, 0, 1},
        {0, 1, 9, 7},
        {3, 8, 6, 7},
        {6, 4, 2, 0}
    }, qtdPares = 0, listaPares[20];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (numeros[i][j]%2 == 0){
                listaPares[qtdPares] = numeros[i][j];
                qtdPares++;
            }
        }
    }

    printf("Lista de Pares:\n");
    for (int i = 0; i < qtdPares; i++)
    {
        printf("%d ", listaPares[i]);
    }

    return 0;
}