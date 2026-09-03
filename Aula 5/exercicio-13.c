/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Exercício 13. Crie um programa que calcule o fatorial de um número informado pelo usuário (não permita números negativos).

int main()
{
    int val, i;
    printf("Digite um número:\n");
    scanf("%d", &val);
    
    if (val > 0){
        i = val-1;
        while(i > 0){
            val = i*val;
            i--;
        }
    } else {
        printf("Número inválido\n");
    }
    
    printf("Resultado fatorial: %d\n", val);
    
    return 0;
}