#include <stdio.h>
#include <stdlib.h>

/*
 * Lista encadeada - Lista Ligada - Linked list
 * 		-A lista encadeada possui al�m do seu valor, um ponteiro para o prox�mo elemento
 *
 *
 *
 */


struct st_no{
	int valor;
	//Pont�iro indicando o prox�mo elemento
	//Atributo do mesmo tipo (struct)
	struct st_no *prox;
};

//Cria uma vari�vel do tipo struct st_no chamada "no"
typedef struct st_no no;


//Fun��o que verifica se a lista encadeada t� vazia ou n�o
//Recebe como par�metro um ponteiro do tipop "no"
int vazia(no *le){
	//Virifica se o pr�ximo elemento t� apontando para NULL, isso significa que ela t� vazia
	if(le -> prox == NULL){
		return 1;
	}else{
		return 0;
	}
}

void incia(no *le){
	le->prox = NULL;
}

void libera(no *le){
	// Se n�o estiver vazia
	if(!vazia(le)){
		no *proxNo, *atual;
		atual = le -> prox;
		while(atual != NULL){
			proxNo = atual -> prox;
			free(atual);
			atual = proxNo;
		}
	}
}

