#include <stdio.h>
int main() {
	int num, quadrado;

	
	for (int i = 1; i < 10; i++) {
		printf("\nInforme um valor\n");
		scanf("%d",&num);
	
	    quadrado = num*num;
	    printf("A quadrado do num %d e .: %d",num,quadrado);
	}
}