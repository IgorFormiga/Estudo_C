#include <stdio.h>
#include <stdlib.h>

/*
 * stdlib - biblioteca padr�o
 *
 * Em qualquer situa��o, utilizando o malloc, calloc ou qualquer outra forma,
 * devemos liberar a mem�ria e anular o ponteiro quando a mem�ria alocada n�o
 * for mais necess�ria.
 */

int main(){
	int qtd, *p;

	printf("Informe a quantidade de elementos: ");
	fflush(stdout);
	scanf("%d", &qtd);
	//Ocupa��o din�mica na mem�ria
	//quantidade de elementos a ser ocupada vezes a quantidade de bytes ocupadas por cada tipo de dado
	//o ponteiro ir� alocar todo o espa�o necess�rio
	int bytes = qtd * sizeof(int);
	//toda vez que for alocado um espa�o na memoria, ele fica alocado independende da finaliza��o do programa
	p = (int*)malloc(bytes); //int = 4bytes
	if(p){
		for(int i = 0; i < qtd; i++){
			printf("Informe o valor para a posi��o %d do vetor: ", i);
			fflush(stdout);
			scanf("%d", &p[i]);
		}

		for(int i = 0; i < qtd; i++){
			printf("No vetor 'numeros[%d]' est� o valor %d; \n", i, p[i]);
		}
		printf("A vari�vel 'p' ocupa %ld bytes em mem�ria", bytes);
	}else{
		printf("Erro, memoria insuficiente!");
	}
	//liberar a mem�ria
	free(p);
	// Desacopla o endere�o de mem�ria que foi alocado para o ponteiro
	p = NULL; //medidade de seguran�a
	return 0;
}
