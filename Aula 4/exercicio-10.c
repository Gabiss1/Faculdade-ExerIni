/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char letra;
    
    printf("Digite uma letra:\n");
    scanf(" %c", &letra);
    
    if(letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u"){
        printf("A letra digitada é uma vogal");
    } else {
        printf("A letra digitada é uma consoante");
    }

    return 0;
}