/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Exercício 6. Crie um programa que pede para o usuário digitar 20 números com ponto flutuante pelo teclado.

int main()
{
    int i = 0;
    double num;
    
    while (i < 20){
        printf("Digite um número decimal:\n");
        scanf("%lf", &num);
        i++;
    }

    return 0;
}