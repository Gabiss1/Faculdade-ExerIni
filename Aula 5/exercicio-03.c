/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Exercício 3. Crie um programa que imprime os números pares de 0 a 2000.

int main()
{
    int i = 0;
    
    while (i <= 2000){
        if (i%2 == 0){
            printf("Número par: %d\n", i);
        }
        i++;
    }

    return 0;
}