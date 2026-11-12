// Entrega

// Exercício 7. Escreva uma função que recebe uma string e um caractere, e retorna o número de vezes que o caractere aparece na string, usando ponteiros. 
// Utilize a seguinte assinatura para sua função:

// int ocorrenciasCaracter(char *texto, char carac) {
//     //seu código
// }

#include<stdio.h>

int ocorrenciasCaracter(char *texto, char carac){
    int qtdRepeticoes = 0;
    char *ponteiro = texto;
    while (*ponteiro != '\0'){
        if (*ponteiro == carac){
            qtdRepeticoes++;
        }
        ponteiro++;
    }
    
    return qtdRepeticoes;
}

int main(){
    char texto[50], caractere;

    fgets(texto, 50, stdin);

    printf("Digite o caractere que deve ser verificado: ");
    scanf("%c", &caractere);

    printf("Quantidade de vezes que o caractere escolhido aparece: %d\n", ocorrenciasCaracter(texto, caractere));
    return 0;
}
