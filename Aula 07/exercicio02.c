#include <stdio.h>

// Exercício 2: Crie uma função que recebe 3 notas por parâmetro e retorna o conceito atingido pela média aritmética das notas. Os conceitos são:

// - entre 0.0 e 4.0 (inclusive): conceito 'D'
// - entre 4.0 (não incluído) e 7.0 (inclusive): conceito 'C'
// - entre 7.0 (não incluído) e 9.0 (inclusive): conceito 'B'
// - entre 9.0 (não incluído) e 10.0 (inclusive): conceito 'A'

// Caso alguma das notas digitadas seja negativa, retorne o caractere 'E'

char retornaConceito(int nota1, int nota2, int nota3){
    if (nota1 < 0 || nota2 < 0 || nota3 < 0){
        return 'E';
    }
    double media = (nota1 + nota2 + nota3)/3.0;
    if (media <= 4.0){
        return 'D';
    } else if(media > 4.0 && media <= 7.0){
        return 'C';
    } else if(media > 7.0 && media <= 9.0){
        return 'B';
    } else {
        return 'A';
    }
}

int main(){
    printf("Conceito A Teste:\n");
    printf("Seu conceito final foi: %c\n", retornaConceito(10, 10, 10));
    printf("Conceito B Teste:\n");
    printf("Seu conceito final foi: %c\n", retornaConceito(10, 8, 8));
    printf("Conceito C Teste:\n");
    printf("Seu conceito final foi: %c\n", retornaConceito(6, 8, 7));
    printf("Conceito D Teste:\n");
    printf("Seu conceito final foi: %c\n", retornaConceito(3, 2, 4));
    printf("Conceito E Teste:\n");
    printf("Seu conceito final foi: %c\n", retornaConceito(-3, 4, 3));
    return 0;
};