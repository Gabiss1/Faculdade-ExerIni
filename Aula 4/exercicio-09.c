/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
// Exercício 9. Crie um programa que recebe a nota do Grau A e a nota do Grau B pelo teclado e imprime na tela se será necessário ou
// não realizar o Grau C (considere o sistema de avaliação da Unisinos, no qual o GA vale 33% e o GB vale 67%). 
// Caso algum valor informado seja negativo, informe uma mensagem de erro e não realize o cálculo.
    double notaGA, notaGB;
    
    printf("Digite a nota do GA:\n");
    scanf("%lf", &notaGA);
    printf("Digite a nota do GB:\n");
    scanf("%lf", &notaGB);
    
    
    if(notaGA >= 0 && notaGB >= 0){
        double notaFinal = notaGA * 0.33 + notaGB * 0.67;
        if(notaFinal < 6){
            printf("Ficou no GC");
        } else {
            printf("Não ficou no GC");
        }
    } else {
        printf("Um dos valores digitados é inválido!");
    }

    return 0;
}