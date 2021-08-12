#include <stdio.h>
#include <stdlib.h>

/*
 * stdlib - biblioteca padrão
 *
 * Em qualquer situação, utilizando o malloc, calloc ou qualquer outra forma,
 * devemos liberar a memória e anular o ponteiro quando a memória alocada não
 * for mais necessária.
 */

int main(){
	int qtd, *p;

	printf("Informe a quantidade de elementos: ");
	fflush(stdout);
	scanf("%d", &qtd);
	//Ocupação dinâmica na memória
	//quantidade de elementos a ser ocupada vezes a quantidade de bytes ocupadas por cada tipo de dado
	//o ponteiro irá alocar todo o espaço necessário
	int bytes = qtd * sizeof(int);
	//toda vez que for alocado um espaço na memoria, ele fica alocado independende da finalização do programa
	p = (int*)malloc(bytes); //int = 4bytes
	if(p){
		for(int i = 0; i < qtd; i++){
			printf("Informe o valor para a posição %d do vetor: ", i);
			fflush(stdout);
			scanf("%d", &p[i]);
		}

		for(int i = 0; i < qtd; i++){
			printf("No vetor 'numeros[%d]' está o valor %d; \n", i, p[i]);
		}
		printf("A variável 'p' ocupa %ld bytes em memória", bytes);
	}else{
		printf("Erro, memoria insuficiente!");
	}
	//liberar a memória
	free(p);
	// Desacopla o endereço de memória que foi alocado para o ponteiro
	p = NULL; //medidade de segurança
	return 0;
}
