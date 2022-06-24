#include <stdio.h>
int soma(int a, int b);
int main() {
	int n1, n2, r;
	printf("\n Digite o n1.:");
	scanf("%d", &n1);

	printf("\n Digite o n2.:");
	scanf("%d", &n2);
	r = soma(n1, n2);

	printf("\n\n %d + %i = %d", n1, n2, r);
}

int soma(int a, int b) {
	int r;
	r = a + b;
	return r;
}