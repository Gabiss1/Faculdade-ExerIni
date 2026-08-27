/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
// Exercício 12. Altere o programa desenvolvido no exercício 11, considerando agora que os produtos possuem desconto 
// de acordo com a quantidade que forem comprados. Os descontos são os seguintes:

// comprando 3 ou 4 produtos, o desconto é de 10%
// comprando entre 5 (inclusive) e 10 (inclusive) produtos, o desconto é de 15%
// comprando mais do que 10 produtos, o desconto é de 20%
// comprando menos do que 3 produtos, não há desconto

    double preco, desconto;
    int quantidade;
    
    printf("Digite um preço:\n");
    scanf("%lf", &preco);
    printf("Digite o total de unidades compradas:\n");
    scanf("%d", &quantidade);
    
    if(quantidade < 0){
        printf("O total de unidades informado é inválido");
    } else {
        if (quantidade < 3){
            desconto = 0;
        } else if (quantidade == 3 || quantidade == 4){
            desconto = 0.10;
        } else if (quantidade >= 5 && quantidade <= 10){
            desconto = 0.15;
        } else {
            desconto = 0.2;
        }
        double valCompra = preco * quantidade;
        double valFinal = valCompra - (valCompra * desconto);
        printf("O valor final da compra foi de: R$%.2f", valFinal);
    }

    return 0;
}