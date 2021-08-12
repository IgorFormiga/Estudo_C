#include <stdio.h>

/*
Ponteiros: manipula��o de memoria (endere�o de memoria) - aponta um ende�o de memoria
Baixo n�vel - hardware/logica/mem�ria
 */

/*
valor++ e valor-- imprime o valor antes de realizar o incremento
++valor e --valor realiza o incremento e depois imprime
 */

//<tipo>*(asterisco) informa que n�o ser� recebido um valor, mas sim um endere�o de mem�ria
void incrementa(int* valor){
	printf("Antes de incrementar.\n");
	// Como foi informado um ende�o de memoria � necess�rio
	//adicionar um asterisco (*<variavel>) a var�vel para informar que vai imprimir
	//o seu valor.
	printf("O contador vale %d \n", (*valor));

	printf("Depois de incrementar.\n");
	printf("O contador vale %d\n", ++(*valor));
	//Endere�o de memoria sem ponteiros
	//printf("O endere�o de mem�ria %d\n", &valor);
	// Com ponteiro
	printf("O endere�o de mem�ria %d\n", valor);
}


int main(){
	// Quando declaramos uma vari�vel, a lingugaem C aloca um espa�o
	// na mem�ria para colocar est� valor.
	int c = 10;

	printf("Antes de incrementar. \n");
	printf("O contador vale %d\n", c);
	// para fazer acesso o endere�o de momoria de uma vari�vel utiliza-se &<variavel>
	printf("O endere�o de mem�ria %d\n", &c);
	//Quando n�o se utiliza ponteiros ocorre C�pia por valor: est� sendo passado uma copia do valor da vari�vel
	// e n�o ela propriamente dita
	// Ao utilizar o & para uma vari�vel est� passando o endere�o de mem�ria
	incrementa(&c);

	printf("Depois de incrementar. \n");
	printf("O contador vale %d \n", c);
	printf("O endere�o de mem�ria %d\n", &c);

	return 0;
}
