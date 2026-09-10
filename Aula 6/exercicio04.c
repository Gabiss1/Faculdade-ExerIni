/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Exercício 4
// Peça para o usuário 10 caracteres e imprima na tela a quantidade de vogais digitadas.

int main()
{
    char caractere;
    int qtdVogais = 0;
    
    for(int i = 1; i <= 10; i++){
        printf("Digite um caractere:\n");
        scanf(" %c", &caractere);
        if (caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U'){
            qtdVogais++;
        }
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u'){
            qtdVogais++;
        }
    };
    
    printf("Quantidade de vogais digitadas: %d\n", qtdVogais);
    return 0;
}