#include <stdio.h>
#include <stdlib.h>

/*
 * Malloc - os espa�os alocados podem conter "lixo" (valores antigos de outros programas),
 * os valores s�o mantidos at� que seja feito uma atribui��o a eles, ou seja, o Malloc n�o
 * remove o lixo da mem�ria.
 *
 * Calloc - os espa�os alocados na mem�ria s�o zerados, ou seja, ao alocar os espa�os �
 * atribuido o valor de zero.
 *
 * Realoc - realoca��o de mem�ria, para fazer a realoca��o � necess�rio j� ter alocado
 * o espa�o na mem�ria com o Malloc ou Calloc
 */



int main(){
	int qtd, *p;

	printf("Informe a quantidade de elementos: ");
	fflush(stdout);
	scanf("%d", &qtd);

	p = (int*)calloc(qtd, sizeof(int)); //int = 4bytes
	if(p){
		printf("A vari�vel 'p' ocupa %ld bytes em mem�ria", sizeof(int) * qtd);

		printf("Informe a quantidade de elementos: ");
		fflush(stdout);
		scanf("%d", &qtd);
		//realloc(<ponteiro_j�_alocado>, <quantidade_de_dados>)
		p = (int*)realloc(p, qtd * sizeof(int));

		if(p){
			printf("A vari�vel 'p' ocupa %ld bytes em mem�ria\n", sizeof(int) * qtd);
		}else{
			printf("Erro, memoria insuficiente!\n");
		}

	}else{
		printf("Erro, memoria insuficiente!");
	}
	//liberar a mem�ria
	free(p);
	// Desacopla o endere�o de mem�ria que foi alocado para o ponteiro
	p = NULL; //medidade de seguran�a
	return 0;
}
