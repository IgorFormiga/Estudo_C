#include <stdio.h>

/*
while(enquanto): utilizando quando se precisa de um loop onde n�o se tenha um
cr�terio de parada e antes de iniciar o loop a condi��o � checada
 */

int main(){
	int numero, soma = 0;

	printf("Informe um n�mero: ");
	fflush(stdout);
	scanf("%d", &numero);

	// while(condi��o)
	// != == diferente
	while(numero != 0){
		soma = soma + numero;
		printf("Informe um n�mero: ");
		fflush(stdout);
		scanf("%d", &numero);
	}
	printf("O valor da soma � %d", soma);
	return 0;
}
