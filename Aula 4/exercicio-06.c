/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    // Exercício 6. Crie um programa que aplica uma taxa de juros em um determinado preço digitado pelo teclado. 
    //A taxa aplicada deve ser:
    
    // Aumento de 10% caso o valor seja menor do que 100
    // Aumento de 20% caso o valor esteja entre 100 (inclusive) e 300
    // Aumento de 50% caso o valor esteja entre 300 (inclusive) e 1000
    // Sem aumento de taxa caso o valor seja maior ou igual a 1000
    // Imprima uma mensagem de erro se o valor for negativo
    // Ao final, seu programa deve imprimir o novo valor, já com a taxa aplicada.
    
    double preco, juros, valorFinal;
    
    printf("Digite o preço de um produto:\n");
    scanf("%lf", &preco);
    
    if (preco < 0){
        printf("O valor digitado é inválido!");
    } else {
        if (preco < 100){
            juros = 0.10;
        }
        if (preco >= 100 && juros < 300){
            juros = 0.20;
        }
        if (preco >= 300 && preco < 1000){
            juros = 0.50;
        }
        if (preco >= 1000){
            juros = 0;
        }
        
        valorFinal = preco + (preco * juros);
        printf("O valor final é %.2f", valorFinal);
    }
    

    return 0;
}