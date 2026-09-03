/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Exercício 10. Crie um programa que faça a soma dos valores de 0 até 198.
int main()
{
    int i = 0, soma = 0;
    while (i <= 198){
        soma+=i;
        i++;
    }
    
    printf("A soma dos números de 0 a 198 é: %d", soma);

    return 0;
}