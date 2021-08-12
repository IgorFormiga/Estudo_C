#include <stdio.h>

int main(){
	// Declarando
	int n; //vari�vel que guarda um valor na mem�ria
	int* p; //ponteiro � um valor que aponta para um endere�o da mem�ria

	printf("Informe um n�mero: ");
	fflush(stdout);
	scanf("%d", &n);

	//inciando um ponteiro
	p = &n;

	printf("O n�mero informado foi %d\n", n);

	// %d informa o endere�o da memoria(formato n�merico)
	printf("Endere�o de mem�ria: %d\n", &n);
	// %p informa o endere�o real da memoria(formato hexadecimal)
	printf("Endere�o de mem�ria: %p\n", p);
	return 0;
}
