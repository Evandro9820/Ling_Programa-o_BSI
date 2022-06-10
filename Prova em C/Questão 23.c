#include <stdio.h>

int main()
{
    int qtd_lados;
    float lados, area;

    printf("Insira a quantidade de lados do Poligno: \n\n
    Digite 3 - Para fazer a area de um triangulo");
    scanf("%d", &qtd_lados);

    // printf("Qual o tamanha dos lados: \n");
    // scanf("%f", &lados);

    switch (qtd_lados)
    {
    case (3):
        printf("Qual o tamanho dos lados: \n");
        scanf("%f", &lados);
        printf("A área desse polígono é: %2f", (lados * lados * 1.73) / 4);
        break;
    case (4):
        printf("Qual o tamanho dos lados: \n");
        scanf("%f", &lados);
        printf("A area desse poligno é: %2f", (lados * lados));

    case (6):
        printf("Qual o tamanho dos lados: \n");
        scanf("%f", &lados);
        printf("A área desse polígono é: %2f", (6 * lados * lados * 1.73) / 4);

    default:    
        printf("Não sei calcular a area\n\n");
    }
}