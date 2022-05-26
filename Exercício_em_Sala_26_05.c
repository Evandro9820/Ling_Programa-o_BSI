#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int n, ns,tent;
	srand(time(NULL));

	ns = rand() % 100;
	for (;;) {
		printf("\nDigite um numero:");
		scanf("%i", &n);
    tent++;
    
		if (n > ns) {
			printf("\n O numero sorteado é menor");
		}
    else if (n<ns){
      printf("\nO numero sorteado é menor ");
      
    }
    else{
      printf("Você acertou o número");
      break;
    }
	}
  printf("Você ganhou o jogo com %d tentativas",tent);
  
}