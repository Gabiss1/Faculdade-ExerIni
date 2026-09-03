/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Exercício 1. Crie um programa que pede para o usuário digitar 50 inteiros pelo teclado.

int main()
{
    int i = 0, valor;
    
    while (i < 50){
        printf("Digite um número inteiro:\n");
        scanf("%d", &valor);
        i++;
    }

    return 0;
}