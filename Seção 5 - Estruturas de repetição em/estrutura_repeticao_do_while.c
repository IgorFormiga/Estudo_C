#include <stdio.h>

/*
do..while (faça enquanto): utilizando quando se precisa de um loop onde não se tenha um
críterio de parada e antes de iniciar o loop a condição é checada
do{
Bloco de execução
}
whiele(condição)
 */

int main(){
	int numero, soma = 0;

	do{
		printf("Digite um número:");
		fflush(stdout);
		scanf("%d", &numero);

		soma = soma + numero;
	}while(numero != 0);

	printf("A soma é igual a %d", soma);

	return 0;
}
