/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    // Exercício 4. Crie um programa que recebe três valores inteiros pelo teclado e imprime qual dos três é menor.
    
    int a, b, c;
    
    printf("Digite o primeiro número:\n");
    scanf("%d", &a);
    printf("Digite o segundo número:\n");
    scanf("%d", &b);
    printf("Digite o terceiro número:\n");
    scanf("%d", &c);
    
    if(a < b){
        if(a < c){
            printf("O número %d é o menor!", a);
        } else {
            printf("O número %d é o menor!", c);
        }
    } else {
        if(b < c){
            printf("O número %d é o menor!", b);
        } else {
            printf("O número %d é o menor!", c);
        }
    }

    return 0;
}