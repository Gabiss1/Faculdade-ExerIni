/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Exercício 11. Crie um programa que imprima a soma dos valores pares e a soma dos 
// valores ímpares entre dois números quaisquer digitados pelo usuário.

int main()
{
    int val1, val2, menor, maior, somaPares = 0, somaImpares = 0;
    printf("Digite um número:\n");
    scanf("%d", &val1);
    printf("Digite outro número:\n");
    scanf("%d", &val2);
    
    if(val1 > 0 && val2 > 0){
        if (val1 > val2){
            maior = val1;
            menor = val2+1;
        } else {
            maior = val2;
            menor = val1+1;
        }
        while(menor < maior){
            if(menor%2 == 0){
                somaPares+=menor;
            } else {
                somaImpares+=menor;
            }
            menor++;
        }
    }
    printf("\nSoma dos valores pares: %d\n", somaPares);
    printf("Soma dos valores ímpares: %d\n", somaImpares);
    
    return 0;
}