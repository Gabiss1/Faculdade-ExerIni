/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Exercício 12. Crie um programa que pede para o usuário digitar números positivos via teclado. 
// Quando o usuário digitar um número negativo, informe a média de todos os números que ele informou.

int main()
{
    int val, totalValores = 0;
    double i = 0, mediaValores;
    
    while(val >= 0){
        printf("Digite um número:\n");
        scanf("%d", &val);
        totalValores+=val;
        i++;
    }
    
    printf("Média dos valores digitados: %f\n", (totalValores/i));
    
    return 0;
}