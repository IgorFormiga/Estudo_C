#include <stdio.h>


/*
 * Pilha (Stack): FILO - Fist in Last out
 * 		- Sempre que um elemento � adicionado, ele ocupar� a possi��o no topo da pilha;
 * 		- S� temos acesso ao elemento que est� no topo, ou seja, para adicionar ou remover
 * 		os elementos � necess�rio ir pelo topo;
 * 		- O processo de inserir um elemento � chamado de push;
 * 		- O processo de remover um elemento � chamado de pop;
 * 		- A vari�vel top(topo) - sempre vai ser a posi��o do utlimo elemento adicionado + 1,
 * 		ou seja, indica a posi��o do proximo elemento a ser inserido;
 * 		- Aplica��o:
 * 			- Ctrl + Z;
 */

#define TAMPILHA 10

int pilha[TAMPILHA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int topo = 0;

void lista_elementos(){
	printf("-----------------Pilha Atual---------------\n");
	for(int i = 0; i < TAMPILHA; i++){
		printf("-");
		printf("|%d|", pilha[i]);
		printf("-");
	}
	printf("\nTopo: %d", topo);
	printf("\n\n");
}

void push(){
	int val;
	printf("Informe o valor: ");
	fflush(stdout);
	scanf("%d", &val);
	if(topo < TAMPILHA){
		pilha[topo] = val;
		topo = topo + 1;
		lista_elementos();
	}else{
		printf("Pilha cheia\n");
	}
}

void pop(){
	if(topo > 0){
		pilha[topo - 1] = 0;
		topo = topo - 1;
		lista_elementos();
	}else{
		printf("Pilha vazia \n");
	}
}

void clear_pilha(){
	for(int i = 0; i < TAMPILHA; i++){
		pilha[i] = 0;
	}
	topo = 0;
}

int main(){
	int opcao = 0;

	do{
		printf("Selecione a op��o: \n");
		printf("[1] - Inserir (push)\n");
		printf("[2] - Remover (pop)\n");
		printf("[3] - Listar\n");
		printf("[4] - Limpar a pilha\n");
		printf("[-1] - Sair\n");
		printf("Op��o: ");
		fflush(stdout);
		scanf("%d", &opcao);

		switch(opcao){
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			lista_elementos();
			break;
		case 4:
			clear_pilha();
			break;
		case -1:
			break;
		default:
			printf("Op��o Invalida!");
		}

	}while(opcao != -1);

	return 0;
}
