// Entrega

// Exercício 5. Escreva uma função que recebe um ponteiro para um array de inteiros e seu tamanho, e retorna a soma dos elementos do array. 
// Tente usar ponteiros também dentro do laço, no momento de pegar a informação do array e acumular na variável que armazena a soma.

#include<stdio.h>

int somaValorElementos(int *array, int tamanho){
    int valorTotal = 0;
    for (int i = 0; i < tamanho; i++){
        valorTotal += *(array+i);
    }
    return valorTotal;
}

int main(){
    int numeros[10] = {10, 20, 21, 4, 5, 6, 11, 23, 43, 8};

    printf("Soma do valor total dos valores: %d\n", somaValorElementos(numeros, 10));
}
