/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Exercício 2
// Crie um programa que imprime na tela todos os valores entre dois valores digitados pelo teclado.

int main()
{
    int val1, val2, menor, maior;
    printf("Digite o primeiro número:\n");
    scanf("%d", &val1);
    printf("Digite o segundo número:\n");
    scanf("%d", &val2);
    
    if(val1 > val2){
        maior = val1;
        menor = val2+1;
    } else {
        maior = val2;
        menor = val1+1;
    }
    
    for(; menor < maior; menor++){
        printf("Valor: %d\n", menor);
    };

    return 0;
}