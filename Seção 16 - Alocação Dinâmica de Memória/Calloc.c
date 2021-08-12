#include <stdio.h>
#include <stdlib.h>

/*
 * Malloc - os espaços alocados podem conter "lixo" (valores antigos de outros programas),
 * os valores são mantidos até que seja feito uma atribuição a eles, ou seja, o Malloc não
 * remove o lixo da memória.
 *
 *
 * Calloc - os espaços alocados na memória são zerados, ou seja, ao alocar os espaços é
 * atribuido o valor de zero.
 */



int main(){
	int qtd, *p;

	printf("Informe a quantidade de elementos: ");
	fflush(stdout);
	scanf("%d", &qtd);

	p = (int*)calloc(qtd, sizeof(int)); //int = 4bytes
	if(p){
		for(int i = 0; i < qtd; i++){
			printf("Informe o valor para a posição %d do vetor: ", i);
			fflush(stdout);
			scanf("%d", &p[i]);
		}

		for(int i = 0; i < qtd; i++){
			printf("No vetor 'numeros[%d]' está o valor %d; \n", i, p[i]);
		}
		printf("A variável 'p' ocupa %ld bytes em memória", sizeof(int) * qtd);
	}else{
		printf("Erro, memoria insuficiente!");
	}
	//liberar a memória
	free(p);
	// Desacopla o endereço de memória que foi alocado para o ponteiro
	p = NULL; //medidade de segurança
	return 0;
}
