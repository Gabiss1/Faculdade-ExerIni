/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Exercício 5. Crie um programa que solicita 10 caracteres pelo teclado. Ao final, imprima quantas letras A foram digitadas.

int main()
{
    int i = 0, qtd = 0;
    char letra;
    
    while (i < 10){
        printf("Digite um caractere:\n");
        scanf(" %c", &letra);
        if (letra == 'A'){
            qtd++;
        }
        i++;
    }
    printf("Quantidade de letras A: %d\n", qtd);

    return 0;
}