/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
// Exercício 7. Crie um programa que recebe um valor inteiro referente a um determinado ano. 
// Imprima na tela se o ano informado é bissexto ou não.

    int ano;
    
    printf("Digite um ano:\n");
    scanf("%d", &ano);
    
    if(ano%100 == 0 && ano%400 == 0){
        printf("O ano %d é bissexto\n", ano);
    } else {
        if(ano%4 == 0 && ano%100 != 0){
            printf("O ano %d é bissexto\n", ano);
        } else {
            printf("O ano %d não é bissexto\n", ano);
        }
    }

    return 0;
}