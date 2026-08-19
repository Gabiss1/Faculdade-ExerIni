/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("Digite 5 números: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    int soma = a+b+c+d+e;
    int produto = a*b*c*d*e;
    
    printf("Soma: %d\n", soma);
    printf("Produto: %d", produto);

    return 0;
}