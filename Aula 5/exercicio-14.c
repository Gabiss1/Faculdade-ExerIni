/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Exercício 14. Crie um programa que diga se o número informado pelo usuário é primo ou não.

int main()
{
    int val, i = 2, verif = 1;
    
    printf("Digite um número:\n");
    scanf("%d", &val);
    
    while(i < val){
        if(val%i == 0){
            verif++;
            i = val;
        } else {
            i++;
        }
    }
    
    if (verif == 1){
        printf("\nSeu número é primo");
    } else {
        printf("\nSeu número não é primo");
    }
    
    return 0;
}