#include <stdio.h>

int main()
{
    int n1, n2, s;

    printf("Insira um valor.:  \n");
    scanf("%d", &n1);

    printf("Insira um valor novamente.:  \n");
    scanf("%d", &n2);

    s = n1 + n2;

    if (s > 10)
    {
        printf("%d", s);
    }
}