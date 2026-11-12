// Entrega

// Exercício 3. Escreva uma função que troca os valores de duas variáveis inteiras usando ponteiros. Utilize a seguinte assinatura para sua função:
// void trocaValores(int *a, int *b){
//     //seu código
// }

#include<stdio.h>

void trocaValores(int *a, int *b){
    int ponteiro = *a;

    *a = *b;
    *b = ponteiro;
}

int main(){
    int a = 10, b = 20;

    trocaValores(&a, &b);
    printf("Valor de A: %d\n", a);
    printf("Valor de B: %d\n", b);

    return 0;
}
