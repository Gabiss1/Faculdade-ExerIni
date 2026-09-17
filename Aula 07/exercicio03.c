#include <stdio.h>

// Exercício 3: Crie uma função que recebe um inteiro por parâmetro e retorna verdadeiro (1) caso seja um valor primo e falso (0) caso contrário.
// Caso o parâmetro seja negativo o método deve retornar falso (0).

int imprimeValores(int x){
    int verif = 1;

    for (int i = 0; i < x; i++){
        if(x%i == 0){
            printf("Seu número é primo");
            verif = 0;
            i = x;
        } else {
            i++;
        }
    }
    
    return verif;
}

void main(){
    int testeFun = imprimeValores(10);

    if (testeFun == 1){
        printf("Seu numero eh primo");
    } else {
        printf("Seu numero nao eh primo");
    }
}
