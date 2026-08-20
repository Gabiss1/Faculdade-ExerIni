/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b;
    
    printf("Digite um número inteiro:\n");
    scanf("%d", &a);
    printf("Digite outro número inteiro:\n");
    scanf("%d", &b);
    if (a == b){
        printf("Os valores de A e B são iguais!\n");
    } else if (a > b){
        printf("O número %d é maior!\n", a);
    } else {
        printf("O número %d é maior!\n", b);
    }

    return 0;
}