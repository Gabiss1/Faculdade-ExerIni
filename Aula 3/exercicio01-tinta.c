/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int l, r;
    double altura, largura;
    
    printf("Digite o total de litros da lata e o custo da lata:\n");
    // 1 Lata = X tinta --> custo
    scanf("%d %d", &l, &r);
    printf("Agora digite a altura e a largura da parede que deseja pintar:\n");
    scanf("%lf %lf", &altura, &largura);
    
    double areaParede = altura*largura;
    double totalTinta = (areaParede/5)*2;
    double custoLitro = r/l;
    double totalCusto = totalTinta*custoLitro;
    
    printf("Total de tinta: %f\n", totalTinta);
    printf("Custo total: %.2f\n", totalCusto);

    return 0;
}