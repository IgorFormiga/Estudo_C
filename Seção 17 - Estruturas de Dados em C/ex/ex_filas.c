#include <stdio.h>

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
		tail = tail + 1;
		lista_elementos();
	}else{
		printf("A pilha tá cheia");
	}
}

void dequeue(){
	if(head < tail){
		//Atribuindo o valor de zero a posição que irá sair da fila
		for(int i = 0; i < TAMFILA; i++){
			fila[i] = fila[i+1];
		}
		fila[TAMFILA] = 0;
		tail = tail - 1;
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
	lista_elementos();
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
		case -1:
			break;
		default:
			printf("Opção Invalida!");
		}

	}while(opcao != -1);

	return 0;
}
