/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Exercício 9. Crie um programa que pede para o usuário digitar 2 valores inteiros via teclado (val1 e val2). 
// Se nenhum dos valores for negativo, escreva os números pares entre o menor e o maior valor.

int main()
{
    int val1, val2, menor, maior;
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
                printf("O número %d é par!\n", menor);
            }
            menor++;
        }
    }
    
    return 0;
}