#include <stdio.h>
#include <windows.h>

int opcMenu;

void menu(){
    printf("Escolha uma opcao:\n");
    printf("1 - Calcular media\n");
    printf("2 - Calcular valor máximo e mínimo\n");
    printf("3 - Calcular desvio de cada leitura em relação a media\n");
    printf("4 - Verificar se valores estão dentro de faixa segura\n");
    printf("5 - Exibir barra grafica de intensidade media\n");
    printf("6 - Gerar relatório completo\n");
    printf("0 - Sair\n");
    scanf("%d", &opcMenu);
}

int main(){
    SetConsoleOutputCP(65001);
    menu();
    if (opcMenu == 1){
        printf("Foi a opcao 1");
    }
    return 0;
}


