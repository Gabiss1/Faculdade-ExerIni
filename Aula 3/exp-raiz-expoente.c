/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <math.h>
#include <stdio.h>

int main()
{
    int base = 5, expoente = 2;
    int radicando = 9;
    // pow --> Potência
    printf("Potência: %f\n", pow(base, expoente));
    // sqrt --> Raíz quadrada
    printf("Raíz: %f\n", sqrt(radicando));

    return 0;
}