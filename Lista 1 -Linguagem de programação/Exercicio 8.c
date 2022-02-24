#include <stdio.h>

int main()
{
    int i;
    float resto;
    printf("\n Insira um valor. \n");
    scanf("%d", &i);

    resto = i % 5;

    if (resto == 0)
    {
        printf("\n E divisivel por cinco");
    }
    else
    {
        printf("\n Não é divisivel por cinco");
    }
}