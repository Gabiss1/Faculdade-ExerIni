#include <stdio.h>


void osvaldo(int x){
    if(x%2 == 0){
        printf("Eh par\n");
    } else {
        printf("Eh impar\n");
    }
}

void imprimePares(int x, int y){
    int maior, menor;
    if (x > y){
        menor = y+1;
        maior = x;
    } else{
        menor = x+1;
        maior = y;
    }
    
    for (; menor < maior; menor++){
        if(menor%2 == 0){
            printf("O numero %d Eh par\n", menor);
        }
    }
}

int soma(int i, int a){
    return i + a;
}

int main(){
    int x = 10;
    osvaldo(x);
    printf("Looping 1:\n");
    imprimePares(20, 30);
    printf("Looping 2:\n");
    imprimePares(40, 10);
    printf("Looping 3:\n");
    imprimePares(1, 11);
    printf("Looping 4:\n");
    imprimePares(11, 67);
    
    return 0;
};