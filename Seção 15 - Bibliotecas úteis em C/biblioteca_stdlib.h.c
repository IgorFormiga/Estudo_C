#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>


/*Biblioteca stdlib.h:
 * 		Conversão de strings:
 * 		-atof() - converte de str para double
 * 		-atoi() - converte de str para int
 * 		-atol() - converte de str para long float
 * 		Geração de sequência pseudo-aleatório
 * 		-rand() - gera número aleatório
 * 		-srand() - inicializa o gerador de números aleatórios, caso não for utilizado irá gerar o mesmo números aleatórios
 * 		Gerenciamento de memória dinâmica
 * 		-malloc()
 * 		-callod()
 * 		-realoc()
 * 		Pesquisa e ordenação:
 * 		-qsort()- ordena os elementos de um array
 * 		Aritmética de numeros inteiros:
 * 		-abs()- valores absolutos
 * 		-div() - divisão inteira (.quot -> cosiente/.rem -> resto)
 *
 */


//Criando uma função para utilizar o qsort:
// É necessário dois ponteiros pois sempre irá ocorrer uma comparação entre duas posições
int compara(int *x, int *y){
	if(*x > *y){
		return 1;
	}else if(*x == *y){
		return 0;
	}else{
		return -1;
	}
}






int main(){
	char valor_s[5];
	double valor_d;
	int valor_i;
	time_t t;
	int numeros[7] = {6, 2, 9, 3, 7, 1 , 5};

	//strcpy pega um valor e copia para dentro da variável
	strcpy(valor_s, "4.5");


	valor_d = atof(valor_s); //caso fosse informado 4.a o valor é convertido para 4.0
	valor_i = atoi(valor_s); //caso for informado uma letra, o valor retornado é zero

	printf("O valor é %.2f\n", valor_d);
	printf("O valor é %d\n", valor_i);



	//Inicilializando o gerador
	// unsigned - sem sinal
	srand((unsigned) time(&t));

	//Gerando números aleatórios:
	// Gerar 6 números entre 0 e 60
	for(int i = 0; i < 6; i++){
		// rand se inicia em 0(zero) % <nuumero_especificado> - 1
		printf("%d\n", rand() % 61);
	}
	printf("Valores não ordenados:");
	//Ordenando um array:
	for(int i = 0; i < 7; i++){
		printf("%d\n", numeros[i]);
	}
	//qsort(<nome_do_elemento. quantidade_de_elementos, quantidade_de_bytes_ocupada
	// (void*)-> casting na função compara, pois é o tipo de parametros que ele espera como retorno é um ponteiro para um void
	// compara -> informa qual função é utilizada para comparar os dados
	qsort(numeros, 7, sizeof(int), (void *)compara);
	printf("Valores ordenados:");
	for(int i = 0; i < 7; i++){
			printf("%d\n", numeros[i]);
		}
	return 0;
}
