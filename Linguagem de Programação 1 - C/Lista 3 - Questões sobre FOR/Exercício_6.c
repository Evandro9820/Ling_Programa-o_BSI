#include <stdio.h>
int main() {
	for (int i = 50 + 1; i <= 100 - 2; i++) {
		if (i % 5 == 0)
			printf(" %d", i);
	}
}