#include <stdio.h>
#include <stdlib.h>
int main() {
	double n1, n2;
	char op;

	printf("\nInsira  um valor\n");
	scanf("%lf", &n1);

	printf("\nInsira outro valor\n");
	scanf("%lf", &n2);

	printf("Agora insira o simbolo da operacao que voce ira realizar");
	scanf(" %c", &op);

	switch (op) {
	case '+':
		printf(" SOMA = %f", n1 + n2);
		break;

	case '-':
		printf("SUBTRACAO = &f", n1 - n2);
		break;

	case '*':
		printf("MULTIPLICACAO = %f", n1 * n2);
		break;

	case '/':
		print("DIVISAO = %f", n1 / n2);
		break;
	}
}
