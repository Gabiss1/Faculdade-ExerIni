/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Exercício 15. Crie um programa que imprime os números primos entre 0 e 200, imprimindo ao final a soma destes números.

int main()
{
    int i, j = 0, totalPrimos = 0, verif;
    
    while(j < 200){
        verif = 1;
        i = 0;
        while(i < j){
            if(j%i == 0){
                verif++;
                i = j;
            }
            i++;
        }
        if (verif = 1){
            printf("%d é primo\n", j);
            totalPrimos+=j;
        }
        j++;
    }

    printf("A soma dos números primos de 0 a 200 é: %d", totalPrimos);
    
    return 0;
}