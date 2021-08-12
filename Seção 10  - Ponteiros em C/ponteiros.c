#include <stdio.h>

/*
Ponteiros: manipulação de memoria (endereço de memoria) - aponta um endeço de memoria
Baixo nível - hardware/logica/memória
 */

/*
valor++ e valor-- imprime o valor antes de realizar o incremento
++valor e --valor realiza o incremento e depois imprime
 */

//<tipo>*(asterisco) informa que não será recebido um valor, mas sim um endereço de memória
void incrementa(int* valor){
	printf("Antes de incrementar.\n");
	// Como foi informado um endeço de memoria é necessário
	//adicionar um asterisco (*<variavel>) a varável para informar que vai imprimir
	//o seu valor.
	printf("O contador vale %d \n", (*valor));

	printf("Depois de incrementar.\n");
	printf("O contador vale %d\n", ++(*valor));
	//Endereço de memoria sem ponteiros
	//printf("O endereço de memória %d\n", &valor);
	// Com ponteiro
	printf("O endereço de memória %d\n", valor);
}


int main(){
	// Quando declaramos uma variável, a lingugaem C aloca um espaço
	// na memória para colocar esté valor.
	int c = 10;

	printf("Antes de incrementar. \n");
	printf("O contador vale %d\n", c);
	// para fazer acesso o endereço de momoria de uma variável utiliza-se &<variavel>
	printf("O endereço de memória %d\n", &c);
	//Quando não se utiliza ponteiros ocorre Cópia por valor: está sendo passado uma copia do valor da variável
	// e não ela propriamente dita
	// Ao utilizar o & para uma variável está passando o endereço de memória
	incrementa(&c);

	printf("Depois de incrementar. \n");
	printf("O contador vale %d \n", c);
	printf("O endereço de memória %d\n", &c);

	return 0;
}
