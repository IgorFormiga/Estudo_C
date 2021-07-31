#include <stdio.h>

/*
while(enquanto): utilizando quando se precisa de um loop onde não se tenha um
críterio de parada e antes de iniciar o loop a condição é checada
 */

int main(){
	int numero, soma = 0;

	printf("Informe um número: ");
	fflush(stdout);
	scanf("%d", &numero);

	// while(condição)
	// != == diferente
	while(numero != 0){
		soma = soma + numero;
		printf("Informe um número: ");
		fflush(stdout);
		scanf("%d", &numero);
	}
	printf("O valor da soma é %d", soma);
	return 0;
}
