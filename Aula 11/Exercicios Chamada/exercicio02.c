// Exercício 2: Escreva um trecho em C que exiba os valores de um array a double numa mesma
// linha, separados por um hífen. Obs.: não deve ser impresso na tela o último hífen. Por exemplo,
// considerando um array com os valores {1, 2, 3, 4, 5}, a impressão deve ser:
// 1-2-3-4-5
// E não deve ser:
// 1-2-3-4-5-

#include<stdio.h>

int main()
{
    int lista[5] = {1, 5, 6, 10, 19};

    for (int i = 0; i < 5; i++)
    {
        if (i > 0)
        {
            printf("-");
        }
        
        printf("%d", lista[i]);
    }
    return 0;
}
