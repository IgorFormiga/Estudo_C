#include <stdio.h>


int main(){
	int maior, menor, n;

	for(int i = 0; i < 5; i++){
		printf("Digite um número: ");
		fflush(stdout);
		scanf("%d", &n);

		if(i == 0){
			maior = n;
			menor = n;
		}

		if(n < menor){
			menor = n;
		}else if(n > maior){
			maior = n;
		}

	}
	printf("Maior valor: %d\nMenor valor: %d", maior, menor);
	return 0;
}
