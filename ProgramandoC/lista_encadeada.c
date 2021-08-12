#include <stdio.h>
#include <stdlib.h>

/*
 * Lista encadeada - Lista Ligada - Linked list
 * 		-A lista encadeada possui além do seu valor, um ponteiro para o proxímo elemento
 *
 *
 *
 */


struct st_no{
	int valor;
	//Pontéiro indicando o proxímo elemento
	//Atributo do mesmo tipo (struct)
	struct st_no *prox;
};

//Cria uma variável do tipo struct st_no chamada "no"
typedef struct st_no no;


//Função que verifica se a lista encadeada tá vazia ou não
//Recebe como parâmetro um ponteiro do tipop "no"
int vazia(no *le){
	//Virifica se o próximo elemento tá apontando para NULL, isso significa que ela tá vazia
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
	// Se não estiver vazia
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

