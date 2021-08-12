#include <stdio.h>

/*
 * Fila(Queue):
 * 		- O primeiro elemento de entrada é o primeiro elemento de saída;
 * 		- Sempre que um elemento é adiconado a fila, ele vai ocupar a última posição
 * 		- Sempre que um elemento é removido da fila, o primeiro é removido
 * 		- As filas trabalham com o recurso da programação chmado FIFO
 * 		- FIFO - Fist in/Fist out
 *
 *	Funções essenciais:
 *		-enqueue() -> adiciona  elemento a fila
 *		-dequeue() -> remove o elemento
 *		-clear() -> limpa a fila
 *	Estrutura de uma fila:
 *		fila[<n_elementos>]
*		head -> cabeça da fila, índica quem é o primeiro elemento da fila
*		tail -> cauda da fila, índica quantos elementos tem na fila
*	Aplicação: Em qualquer situação onde tenha que organizar o atentimento de elementos;
 *
 */

//Definir uma contante para o tamanho da fila
#define TAMFILA 10

//fila/Queue
int fila[TAMFILA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int head = 0;
int tail = 0;

//Definindo uma função para listar os elementos da fila
void lista_elementos(){
	printf("=========Fila Atual==============\n");
	for(int i = 0; i < TAMFILA; i++){
		printf("-");
		printf("|%d|", fila[i]);
		printf("-");
	}
	printf("\nHead: %d\n", head);
	printf("\nTail: %d\n", tail);
	printf("\n\n");
}

void enqueue(){
	int val;
	if(tail < TAMFILA){
		printf("Informe o elemento para adicionar na fila: ");
		fflush(stdout);
		scanf("%d", &val);
		fila[tail] = val;
		tail = tail +1;
		lista_elementos();
	}else{
		printf("A pilha tá cheia");
	}
}

void dequeue(){
	if(head < tail){
		//Atribuindo o valor de zero a posição que irá sair da fila
		fila[head] = 0;
		head = head + 1;
		lista_elementos();
	}else{
		printf("A fila está vazia");
	}
}

void clear(){
	for(int i = 0; i < TAMFILA; i++){
		fila[i] = 0;
	}
	head = 0;
	tail = 0;
}

int main(){
	int opcao = 0;

	do{
		printf("Selecione a opção: \n");
		printf("[1] - Ineserir (enqueue)\n");
		printf("[2] - Remover (dequeue)\n");
		printf("[3] - Listar\n");
		printf("[4] - Limpar a fila\n");
		printf("[-1] - Sair\n");
		printf("Opção: ");
		fflush(stdout);
		scanf("%d", &opcao);

		switch(opcao){
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			lista_elementos();
			break;
		case 4:
			clear();
			break;
		case -1:
			break;
		default:
			printf("Opção Invalida!");
		}

	}while(opcao != -1);

	return 0;
}
