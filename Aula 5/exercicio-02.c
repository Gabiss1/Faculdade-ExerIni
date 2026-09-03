/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Exercício 2. Crie um programa que imprime os números de 0 a 1000. 

int main()
{
    int i = 0;
    
    while (i <= 1000){
        printf("Número: %d\n", i);
        i++;
    }

    return 0;
}