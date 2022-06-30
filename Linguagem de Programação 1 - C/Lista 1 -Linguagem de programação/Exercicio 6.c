#include <stdio.h>
#include <math.h>

int main()
{

    float n;
    float npositivo, nnegativos;

    printf("Insira um número \n");
    scanf("%f", &n); 
    if (n >= 0)
    {
        npositivo = sqrt(n);
        printf("A raiz quadrada do número %.2f é %.2f", n, npositivo);
    }
    
    else
    {
        nnegativos = n * n;
        printf("O quadrado do número %.2f é %.2f", n, nnegativos);
    }
}
