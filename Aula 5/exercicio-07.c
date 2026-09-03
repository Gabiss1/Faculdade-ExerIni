/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Exercício 7. Crie um programa que solicita para o usuário que ele digite 10 valores inteiros. 
// Ao final, imprima a soma de todos os valores digitados. 

int main()
{
    int i = 0, num, soma = 0;
    
    while (i < 10){
        printf("Digite um número:\n");
        scanf("%d", &num);
        soma+=num;
        i++;
    }
    printf("A soma dos números digitados é: %d\n", soma);

    return 0;
}