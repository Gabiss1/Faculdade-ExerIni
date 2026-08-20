/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <math.h>
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Digite o valor de A:\n");
    scanf("%d", &a);
    printf("Digite o valor de B:\n");
    scanf("%d", &b);
    printf("Digite o valor de C:\n");
    scanf("%d", &c);
    
    double delta = pow(b, 2) - (4.0*a*c);
    double raizDelta = sqrt(delta);
    double raizPositiva = (-b + raizDelta)/(2*a);
    double raizNegativa = (-b - raizDelta)/(2*a);
    printf("\nX'= %.2f\n", raizPositiva);
    printf("X''= %.2f\n", raizNegativa);

    return 0;
}