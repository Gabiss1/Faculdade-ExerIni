// Exercício 1: Para cada conjunto de valores abaixo, escreva o código em C, usando laço(s), que
// preencha um array com os valores:
// a) 10 9 8 7 6 5 4 3 2 1
// b) 0 1 4 9 16 25 36 49 64 81 100
// c) 1 2 3 4 5 10 20 30 40 50
// d) 3 4 7 12 19 28 39 52 67 84

#include<stdio.h>

void listaA(){
    int lista[10], varControle = 0;

    for (int i = 10; i > 0; i--)
    {
        lista[varControle] = i;
        varControle++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", lista[i]);
    }
}

void listaB(){
    int lista[11];

    for (int i = 0; i < 11; i++)
    {
        lista[i] = i*i;
    }
    for (int i = 0; i < 11; i++)
    {
        printf("%d ", lista[i]);
    }
}

void listaC(){
    int lista[10];

    for (int i = 0; i < 5; i++)
    {
        lista[i] = i+1;
        lista[i+5] = (i+1)*10;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", lista[i]);
    }
}

void listaD(){
    int lista[10], varControle = 0;

    for (int i = 10; i > 0; i--)
    {
        lista[varControle] = i;
        varControle++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", lista[i]);
    }
}

int main()
{
    listaA();
    printf("\n");
    listaB();
    printf("\n");
    listaC();
    printf("\n");
    listaD();
    return 0;
}