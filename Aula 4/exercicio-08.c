/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
// Exercício 8. Crie um programa que exibe um menu de calculadora na tela. O menu exibido deve ser o seguinte:

// Digite 1 para somar dois valores
// Digite 2 para subtrair dois valores
// Digite 3 para multiplicar dois valores
// Digite 4 para dividir dois valores
// Digite 5 para realizar uma potência entre dois valores
// Digite 6 para calcular a raiz quadrada de algum valor
// Digite qualquer outro número para sair
// De acordo com a opção informada pelo usuário, 
// solicite os valores necessários para o usuário e imprima na tela o resultado da operação realizada.
    
    double num1, num2;
    int opcao;
    
    printf("Escolha uma opção:\n");
    printf("1- Somar dois valores;\n");
    printf("2- Subtrair dois valores;\n");
    printf("3- Multiplicar dois valores;\n");
    printf("4- Dividir dois valores;\n");
    printf("5- Realizar uma potência entre dois valores;\n");
    printf("6- Calcular a raiz quadrada de algum valor;\n");
    printf("Outro- Sair;\n");
    scanf("%d", &opcao)
    
    if(opcao > 5){
        printf("Saindo...");
    } else if(opcao = 5){
        printf("Digite um número:\n");
        scanf("%lf", &num1);
        scanf("%lf", &num1);
        printf("A raiz quadra de %f é %f", sqrt(num1));
    } else {
        printf("Digite o primeiro número:\n");
        scanf("%lf", &num1);
        printf("Digite o segundo número:\n");
        scanf("%lf", &num2);
    }

    return 0;
}