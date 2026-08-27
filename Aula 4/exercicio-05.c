/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    // Exercício 5. Crie um programa que recebe o preço de um produto pelo teclado e 
    //imprime na tela a mensagem adequada, de acordo com o preço:
    
    // “Preço inválido”, se o preço for negativo ou zero
    // “Preço baixo”, se o preço for entre 0 e 30 (inclusive) 
    // “Preço médio”, se o preço for entre 30 e 50 (inclusive)
    // “Preço alto”, se o preço for maior do que 50
    double preco;
    
    printf("Digite o preço do produto:\n");
    scanf("%lf", &preco);
    
    if(preco <= 0){
        printf("\nPreço inválido");
    } else if(preco <= 30){
        printf("\nPreço baixo");
    } else if(preco <=50){
        printf("\nPreço médio");
    } else if(preco > 50){
        printf("\nPreço alto");
    }   

    return 0;
}