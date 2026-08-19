/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Digite suas 3 notas: ");
    scanf("%d %d %d", &a, &b, &c);
    
    double trabalho = a * 0.1;
    double prova = b * 0.6;
    double teste = c * 0.3;
    double media = prova + trabalho + teste;
    
    printf("\nTrabalho: %f\n", trabalho);
    printf("Prova: %f\n", prova);
    printf("Teste: %f\n", teste);
    printf("Média: %f\n", media);

    return 0;
}