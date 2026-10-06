#include <stdio.h>
#include <windows.h>

void menu()
{
    int execucao = 0;
    double valorA, valorB, valorC;

    while (execucao == 0)
    {
        printf("=== SISTEMA DE BORDO - IMORTAL-1 ===\n");
        printf("\nDigite a primeira leitura: ");
        scanf("%lf", &valorA);
        printf("\nDigite a segunda leitura: ");
        scanf("%lf", &valorB);
        printf("\nDigite a terceira leitura: ");
        scanf("%lf", &valorC);
        printf("\n--- Menu ---");
        printf("1 - Calcular media\n");
        printf("2 - Calcular valor maximo e minimo\n");
        printf("3 - Calcular desvio de cada leitura em relação a media\n");
        printf("4 - Verificar se valores estão dentro de faixa segura\n");
        printf("5 - Exibir barra grafica de intensidade media\n");
        printf("6 - Gerar relatório completo\n");
        printf("0 - Sair\n\n");
        execucao = executaFuncoes(valorA, valorB, valorC);
    }
}

int executaFuncoes(double valorA, double valorB, double valorC)
{
    int opcMenu;
    double media, minAceito, maxAceito;
    char continuar, reiniciar;

    while (opcMenu != 0)
    {
        printf("Escolha uma opcao:");
        scanf("%d", &opcMenu);
        if (opcMenu == 1)
        {
            media = calcularMedia(valorA, valorB, valorC);
            printf("\nMedia das leituras: %.2lf\n", media);
        }

        if (opcMenu == 2)
            encontrarExtremos(valorA, valorB, valorC);

        if (opcMenu == 3)
            calcularDesvio(valorA, valorB, valorC, media);

        if (opcMenu == 4){
            printf("\nValor minimo aceito: ");
            scanf("%lf", &minAceito);
            printf("\nValor maximo aceito: ");
            scanf("%lf", &maxAceito);
            verificarFaixa(valorA, valorB, valorC, minAceito, maxAceito);
        }

        if (opcMenu == 5)
            exibirBarraGrafica(media);

        if (opcMenu == 6)
            exibirRelatorioCompleto();
        if (opcMenu != 0)
        {
            printf("Deseja realizar outra operação? (s/n): ");
            scanf("\n%c", &continuar);
            if (continuar == 'n')
            {
                printf("Deseja iniciar nova simulação? (s/n): ");
                scanf("\n%c", &reiniciar);
                if (reiniciar == 's')
                {
                    menu();
                }
                else
                {
                    printf("IMORTAL-1 encerrando comunicação...");
                    return 1;
                }
            }
        }
    }
}

int main()
{
    menu();
    return 0;
}

double calcularMedia(double valorA, double valorB, double valorC)
{
    return (valorA + valorB + valorC) / 3;
}

void calcularDesvio(double valorA, double valorB, double valorC, double media)
{
    if (media == 0)
    {
        media = calcularMedia(valorA, valorB, valorC);
    }
    
    printf("A Leitura 1 está com %.2lf pontos de desvio da média.\n", (valorA - media));
    printf("A Leitura 2 está com %.2lf pontos de desvio da média.\n", (valorB - media));
    printf("A Leitura 3 está com %.2lf pontos de desvio da média.\n", (valorC - media));
};

double encontrarMaximo(double valorA, double valorB, double valorC)
{
    if (valorA > valorB)
    {
        if (valorA > valorC)
        {
            return valorA;
        }
        else
        {
            return valorC;
        }
    }
    else
    {
        if (valorB > valorC)
        {
            return valorB;
        }
        else
        {
            return valorC;
        }
    }
}

double encontrarMinimo(double valorA, double valorB, double valorC)
{
    if (valorA < valorB)
    {
        if (valorA < valorC)
        {
            return valorA;
        }
        else
        {
            return valorC;
        }
    }
    else
    {
        if (valorB < valorC)
        {
            return valorB;
        }
        else
        {
            return valorC;
        }
    }
}

void encontrarExtremos(double valorA, double valorB, double valorC)
{
    printf("Valor maximo das leituras: %.2lf\n", encontrarMaximo(valorA, valorB, valorC));
    printf("Valor minimo das leituras: %.2lf\n", encontrarMinimo(valorA, valorB, valorC));
}

void verificarFaixa(double valorA, double valorB, double valorC, double minAceito, double maxAceito)
{
    if (valorA >= minAceito && valorA <= maxAceito)
    {
        printf("Leitura 1: OK\n");
    } else
    {
        if (valorA > maxAceito) printf("Leitura 1: ACIMA DO LIMITE\n");
        if (valorA < minAceito) printf("Leitura 1: ABAIXO DO MINIMO\n");
        
    }

    if (valorB >= minAceito && valorB <= maxAceito)
    {
        printf("Leitura 2: OK\n");
    } else
    {
        if (valorB > maxAceito) printf("Leitura 2: ACIMA DO LIMITE\n");
        if (valorB < minAceito) printf("Leitura 2: ABAIXO DO MINIMO\n");
    }
    
    if (valorC >= minAceito && valorC <= maxAceito)
    {
        printf("Leitura 3: OK\n");
    } else
    {
        if (valorC > maxAceito) printf("Leitura 3: ACIMA DO LIMITE\n");
        if (valorC < minAceito) printf("Leitura 3: ABAIXO DO MINIMO\n");
    }
}

void exibirBarraGrafica(double media)
{
    printf("Media das leituras: %.2lf\n", media);
}

void exibirRelatorioCompleto()
{
    printf("=== Relatório Completo ===\n");
}
