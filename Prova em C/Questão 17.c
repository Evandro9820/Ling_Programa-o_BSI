#include <stdio.h>

int main()
{
    int num = 0, soma = 0, cont = 0;
    float media;

    while (num > -1)
    {
        printf("Digite um numero...\n");
        scanf("%d", &num);
        if (num >   -1)
        {
            soma += num;
            cont++;
        }
    }

    media = soma / cont;

    printf("A media eh de %.2f\n", media);
}