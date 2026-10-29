// Exercício 4: Faça um programa que cria um array bidimensional de char e preenche-o com quaisquer valores. 
// Em seguida, peça para o usuário digitar um caractere pelo teclado e imprima na tela a mensagem "Caractere encontrado na posição X do array", 
// onde X é a posição na qual o caractere foi encontrado no array. 
// Caso o caractere não esteja no array imprima a mensagem "Caractere não encontrado no array".
#include<stdio.h>

int main(){
    int numeros[5][4] = {
        {3, 4, 5, 7},
        {3, 4, 0, 1},
        {0, 1, 9, 7},
        {3, 4, 6, 7},
        {6, 4, 2, 0},
    }, numSelecionado;

    printf("Digite um número: ");
    scanf("%d", &numSelecionado);
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (numeros[i][j] = numSelecionado)
            {
                printf("%d %d", i, j);
                printf("Caractere encontrado na posição (%d, %d) do array!", i, j);
                return 0;
            }
        }
    }
    printf("Caractere não encontrado no array!");

    return 0;
}