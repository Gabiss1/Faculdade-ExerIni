#include<stdio.h>

int main(){
    char texto[50], x;
    int totChar = 0;

    printf("Digite um texto:\n");
    scanf("%49s", texto);

    while (texto[totChar] != '\0')
    {
        totChar++;
    }
    
    printf("\nTamanho da String: %d", totChar);
}