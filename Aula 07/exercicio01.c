#include <stdio.h>

// Exercício 1: Crie um procedimento que recebe um inteiro X por parâmetro e imprime os valores de 1 até X (inclusive). 

void imprimeValores(int x){
    for (int i = 1; i <= x; i++){
        printf("Valor: %d\n", i);
    }
}

int main(){
    printf("Looping 1:\n");
    imprimeValores(16);
    printf("\nLooping 2:\n");
    imprimeValores(7);
    printf("\nLooping 3:\n");
    imprimeValores(22);
    printf("\nLooping 4:\n");
    imprimeValores(13);
    printf("\nLooping 5:\n");
    imprimeValores(9);
    return 0;
};