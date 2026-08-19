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
    
    int area = (b*c)/2;
    int perimetroRetangulo = a+b+c+d;
    double areaCirculo = (e*e)/3.14;
    
    printf("Área do triângulo: %d\n", area);
    printf("Perímetro do retângulo: %d\n", perimetroRetangulo);
    printf("Área do círculo: %d\n", areaCirculo);

    return 0;
}