#include <stdio.h>

int main()
{
    int salbruto, prestacao;
    float porcento;

    printf("Insira o valor do salario bruto.\n");
    scanf("%d", &salbruto);

    printf("Insira o valor da prestacao \n");
    scanf("%d", &prestacao);

    porcento = salbruto * 0.3;

    if (prestacao <= porcento)
    {
        printf("O emprestimo pode ser concedido");
    }
    else {
        printf("O emprestimo não pode ser concedido");

    }

}