/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Exercício 3
// Crie um programa que imprime a tabuada de um número qualquer digitado pelo usuário.

int main()
{
    int val1;
    printf("Digite o primeiro número:\n");
    scanf("%d", &val1);
    
    printf("Tabuada do %d:\n", val1);
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", val1, i, (val1*i));
    };

    return 0;
}