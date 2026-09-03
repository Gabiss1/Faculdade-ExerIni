/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Exercício 8. Crie um programa que pergunta para o usuário (via teclado) quantos números ele irá digitar e armazena em uma variável chamada quant. 
// Logo após, faça com que o usuário digite quant números inteiros, e para cada número digitado imprima na tela se o número é negativo, positivo ou zero.

int main()
{
    int i = 0, quant, num;
    printf("Diga quantos números você deseja digitar:\n");
    scanf("%d", &quant);
    
    while (i < quant){
        printf("Digite um número:\n");
        scanf("%d", &num);
        if (num < 0){
            printf("O número digitado é negativo!\n");
        } else if (num > 0){
            printf("O número digitado é positivo!\n");
        } else {
            printf("O número digitado é zero!\n");
        }
        i++;
    }

    return 0;
}