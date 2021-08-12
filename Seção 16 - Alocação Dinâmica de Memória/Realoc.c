#include <stdio.h>
#include <stdlib.h>

/*
 * Malloc - os espaços alocados podem conter "lixo" (valores antigos de outros programas),
 * os valores são mantidos até que seja feito uma atribuição a eles, ou seja, o Malloc não
 * remove o lixo da memória.
 *
 * Calloc - os espaços alocados na memória são zerados, ou seja, ao alocar os espaços é
 * atribuido o valor de zero.
 *
 * Realoc - realocação de memória, para fazer a realocação é necessário já ter alocado
 * o espaço na memória com o Malloc ou Calloc
 */



int main(){
	int qtd, *p;

	printf("Informe a quantidade de elementos: ");
	fflush(stdout);
	scanf("%d", &qtd);

	p = (int*)calloc(qtd, sizeof(int)); //int = 4bytes
	if(p){
		printf("A variável 'p' ocupa %ld bytes em memória", sizeof(int) * qtd);

		printf("Informe a quantidade de elementos: ");
		fflush(stdout);
		scanf("%d", &qtd);
		//realloc(<ponteiro_já_alocado>, <quantidade_de_dados>)
		p = (int*)realloc(p, qtd * sizeof(int));

		if(p){
			printf("A variável 'p' ocupa %ld bytes em memória\n", sizeof(int) * qtd);
		}else{
			printf("Erro, memoria insuficiente!\n");
		}

	}else{
		printf("Erro, memoria insuficiente!");
	}
	//liberar a memória
	free(p);
	// Desacopla o endereço de memória que foi alocado para o ponteiro
	p = NULL; //medidade de segurança
	return 0;
}
