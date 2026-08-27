/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
// Exercício 11. Crie um programa que lê o preço de um determinado produto. 
// Em seguida, simule a compra de X produtos (onde X deve ser solicitado para o usuário pelo teclado), 
// imprimindo o valor total da compra com 2 casas decimais e com o símbolo de reais na frente do valor ("R$"). 
// Caso a quantidade de produtos indicada seja negativa, não realize a conta e imprima uma mensagem de erro.

    double preco, quantidade;
    
    printf("Digite um preço:\n");
    scanf("%lf", &preco);
    printf("Digite o total de unidades compradas:\n");
    scanf("%lf", &quantidade);
    
    if(quantidade < 0){
        printf("O total de unidades informado é inválido");
    } else {
        double valCompra = preco * quantidade;
        printf("O valor final da compra foi de: R$%.2f", valCompra);
    }

    return 0;
}