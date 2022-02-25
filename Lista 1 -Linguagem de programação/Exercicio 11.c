#include <stdio.h>

int main()
{

    int i;
    float resto3, resto7;
    printf("\n Insira um valor. \n");
    scanf("%d", &i);

    resto3 = i % 3;
    resto7 = i % 7;

    if (resto3 == 0 && resto7 == 0)
    {
        printf("\n E divisivel por três e sete");
    }
    else
    {
        printf("\n Não é divisivel por 3 e 7");
    }
}