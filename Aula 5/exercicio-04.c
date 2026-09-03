/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Exercício 4. Crie um programa que imprime os números de 0 a 1000 em ordem decrescente (ou seja, de 1000 a 0).

int main()
{
    int i = 1000;
    
    while (i >= 0){
        printf("Número: %d\n", i);
        i--;
    }

    return 0;
}