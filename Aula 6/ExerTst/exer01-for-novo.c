// Exercício 1. Crie um programa que pede para o usuário digitar 50 inteiros pelo teclado.

#include<stdio.h>

int main()
{
    int num;
    for (int i = 1; i <= 50; i++)
    {
        printf("Digite um numero:\n");
        scanf("%d", &num);
    }
    
    return 0;
}
