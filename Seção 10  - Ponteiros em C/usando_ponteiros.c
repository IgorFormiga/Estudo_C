#include <stdio.h>

int main(){
	// Declarando
	int n; //variável que guarda um valor na memória
	int* p; //ponteiro é um valor que aponta para um endereço da memória

	printf("Informe um número: ");
	fflush(stdout);
	scanf("%d", &n);

	//inciando um ponteiro
	p = &n;

	printf("O número informado foi %d\n", n);

	// %d informa o endereço da memoria(formato númerico)
	printf("Endereço de memória: %d\n", &n);
	// %p informa o endereço real da memoria(formato hexadecimal)
	printf("Endereço de memória: %p\n", p);
	return 0;
}
