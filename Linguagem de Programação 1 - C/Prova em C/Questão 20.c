#include <stdio.h>

int main()
{
    int qtd_horas;
    float valor_horas, sal_base, sal_trab;

    printf("Insira o valor da hora trabalhada\n");
    scanf("%f", &valor_horas);

    printf("Insira a quantidade de horas trabalhadas na semana\n");
    scanf("%i", &qtd_horas);
    sal_base = qtd_horas * valor_horas;

    system("cls ");
    if (qtd_horas <= 40)
    {
        printf("Funcionário sem acrecimo de adicional: %.2f\n\n", sal_base);
    }
    else if (qtd_horas <= 60)
    {
        system("cls ");
        sal_trab = (sal_base * 0.5) + sal_base;
        
        printf("Trabalhando %d horas no valor de %.2f\n\n",qtd_horas,valor_horas);
        printf("O funcionário teve o acrecimo de 50 no salário: %.2f\n\n",sal_trab);

    }
    else if (qtd_horas > 60)
    {
        sal_trab = (sal_base * 0.1) + sal_base;
        printf("O funcionário teve o acrecimo de 100 no salario: %.2f\n\n",sal_trab);
    }
    
}