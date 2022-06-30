#include <stdio.h>
int main() {
	int n1;

	printf("Vamos verificar se um múmero é par ou impar. Por favor insira um "
		   "valor(em inteiros): \n");
	scanf("%d", &n1);

	if (n1 % 2 == 0) {
		printf("O numero é Par");
	} else {
		printf("O numero é Impar");
	}
}