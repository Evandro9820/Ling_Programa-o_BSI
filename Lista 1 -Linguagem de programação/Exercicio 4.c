#include <stdio.h>
int main()
{
    int n;
    printf("Vamos verificar se um número é negatico ou positivo, insira um valor..:\n");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("É positivo");
    }
    else
    {
        printf("É negativo");
        
    }
}