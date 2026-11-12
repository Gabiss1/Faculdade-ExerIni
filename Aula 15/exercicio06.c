// Entrega

// Exercício 6. Construa  um programa que leia uma palavra do teclado, mostre na tela o endereço da string onde ela foi armazenada e após, 
// mostre na tela a terceira e a quarta letra dessa palavra. Use um ponteiro para armazenar os endereços dessas letras.

#include<stdio.h>

int main(){
    char texto[50], *endTerceiraLetra = NULL, *endQuartaLetra = NULL;

    printf("Digite uma palavra: ");
    scanf("%49s", texto);


    endTerceiraLetra = (texto+2);
    endQuartaLetra = (texto+3);

    printf("\nPosicao inicial: %p\n", texto);
    printf("Terceira Letra: %c\n", *endTerceiraLetra);
    printf("Quarta Letra: %c\n", *endQuartaLetra);
}