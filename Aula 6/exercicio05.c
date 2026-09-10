/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Exercício 5
// Crie um programa que solicita o estado civil de 20 pessoas pelo teclado. O usuário deve digitar um destes estadoCivs: 

// S para pessoa Solteira
// C para pessoa casada
// D para pessoa divorciada
// V para pessoa viúva
// Qualquer outro estadoCiv digitado não representa um estado civil válido
// Ao final, imprima a quantidade de pessoas solteiras, casadas, divorciadas e viúvas (nesta ordem)

int main()
{
    char estadoCiv;
    int qtdSol = 0, qtdCas = 0, qtdDiv = 0, qtdViu = 0;
    for(int i = 0; i < 20; i++){
        printf("Digite seu estado civil:\n");
        scanf(" %c", &estadoCiv);
        if (estadoCiv == 'S' || estadoCiv == 's'){
            qtdSol++;
        } else if (estadoCiv == 'C' || estadoCiv == 'c'){
            qtdCas++;
        } else if (estadoCiv == 'D' || estadoCiv == 'd'){
            qtdDiv++;
        } else if (estadoCiv == 'V' || estadoCiv == 'v'){
            qtdViu++;
        } else {
         printf("Estado civil inválido, não será contabilizado!\n");
        }
    }
    printf("Total de pessoas solteiras: %d\n", qtdSol);
    printf("Total de pessoas casadas: %d\n", qtdCas);
    printf("Total de pessoas divorciadas: %d\n", qtdDiv);
    printf("Total de pessoas viúvas: %d\n", qtdViu);

    return 0;
}