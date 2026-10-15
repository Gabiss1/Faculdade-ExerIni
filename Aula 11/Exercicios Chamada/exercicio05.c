// Exercício 5: Crie uma função que recebe um array de inteiros A e um valor inteiro X e retorna a
// quantidade de vezes que X aparece no array A.

#include<stdio.h>

int repetidos(int lista[], int tamanhoLista, int valorRepetido){
    int qdtRepeticoes = 0;

    for (int i = 0; i < tamanhoLista; i++)
    {
        if (lista[i] == valorRepetido)
        {
            qdtRepeticoes++;
        }
    }

    return qdtRepeticoes;
}

int main(){
    int listaInteiros[7] = {1, 2, 3, 5, 3, 3, 9};

    printf("Quantidade de vezes que o valor %d aparece na lista: %d", 9, repetidos(listaInteiros, 7, 9));

    return 0;
}
