#include <stdio.h>
int main()
{
    int n1, n2, s;
    printf("\nInsira um valor.:");
    scanf("%d", &n1);
    printf("\n Insira um valor novamente.:");
    scanf("%d", &n2);

    s = n1 + n2;
    if (s > 20)
    {
        s = s + 8;
        printf("O valor somado com +8 é: %d", s);
    }
    if (s <= 20)
    {
        s = s - 5;
        printf("O valors subtraido com - 5 é: %d", s);
    }
}

