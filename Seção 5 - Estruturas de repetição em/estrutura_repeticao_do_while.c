#include <stdio.h>

/*
do..while (fa�a enquanto): utilizando quando se precisa de um loop onde n�o se tenha um
cr�terio de parada e antes de iniciar o loop a condi��o � checada
do{
Bloco de execu��o
}
whiele(condi��o)
 */

int main(){
	int numero, soma = 0;

	do{
		printf("Digite um n�mero:");
		fflush(stdout);
		scanf("%d", &numero);

		soma = soma + numero;
	}while(numero != 0);

	printf("A soma � igual a %d", soma);

	return 0;
}
