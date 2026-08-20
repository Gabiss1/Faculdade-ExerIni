/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
// Exercício 3. Crie um programa que recebe dois valores inteiros A e B pelo teclado e imprime o valor de A dividido por B. 
//Entretanto, se o valor de B for 0, imprima uma mensagem de erro e não faça a divisão.
    int a, b;
    
    printf("Digite um número inteiro:\n");
    scanf("%d", &a);
    printf("Digite outro número inteiro:\n");
    scanf("%d", &b);
    
    int divisao = a/b;
    if (b > a){
        printf("Erro ao fazer a divisão: o valor de B é maior que o de A.");
    } else {
        printf("A divisão de %d e %d é igual a %d", a, b, divisao);
    }
    
    return 0;
}