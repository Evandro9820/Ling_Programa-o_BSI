#include <stdio.h>

int main() {
	int num;
	float metade;

	for (int i = 1; i <= 10; i++) {
		printf("\nInforme um valor\n");
		scanf("%d", &num);

		metade = num / 2;
		printf("A metade do num %d e .: %.2f", num, metade);
	}
}
