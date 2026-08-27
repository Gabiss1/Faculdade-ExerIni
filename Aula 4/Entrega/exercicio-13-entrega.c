/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
// Exercício 13. Sabendo que o IMC (Índice de Massa Corporal) é dado pelo peso da pessoa dividido por sua altura ao quadrado, 
// crie um programa que solicita que o usuário informe as informações necessárias para o cálculo do IMC. 
// Seu programa deve imprimir uma mensagem referente à classificação na qual a pessoa se encontra, de acordo com o que segue:

// Menor que 18.5: Abaixo do peso
// Entre 18.5 (inclusive) e 25 (não incluindo o 25): Peso normal
// Entre 25 (inclusive) e 30 (não incluindo o 30): Pré-obesidade
// Entre 30 (inclusive) e 35 (não incluindo o 35): Obesidade Grau 1
// Entre 35 (inclusive) e 40 (não incluindo o 40): Obesidade Grau 2
// 40 ou mais: Obesidade Grau 3

    double altura, peso;
    
    printf("Digite sua altura:\n");
    scanf("%lf", &altura);
    printf("Digite seu peso:\n");
    scanf("%lf", &peso);
    
    double imc = peso / (pow(altura, 2));
    
    if(imc < 18.50){
        printf("Abaixo do peso");
    } else if(imc >= 18.5 && imc < 25){
        printf("Peso normal");
    } else if(imc >= 25 && imc < 30){
        printf("Pré-obesidade");
    } else if(imc >= 30 && imc < 35){
        printf("Obesidade Grau 1");
    } else if(imc >= 35 && imc < 40){
        printf("Obesidade Grau 2");
    } else {
        printf("Obesidade Grau 3");
    }
    
    return 0;
}