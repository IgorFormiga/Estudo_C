#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>


/*Biblioteca stdlib.h:
 * 		Convers�o de strings:
 * 		-atof() - converte de str para double
 * 		-atoi() - converte de str para int
 * 		-atol() - converte de str para long float
 * 		Gera��o de sequ�ncia pseudo-aleat�rio
 * 		-rand() - gera n�mero aleat�rio
 * 		-srand() - inicializa o gerador de n�meros aleat�rios, caso n�o for utilizado ir� gerar o mesmo n�meros aleat�rios
 * 		Gerenciamento de mem�ria din�mica
 * 		-malloc()
 * 		-callod()
 * 		-realoc()
 * 		Pesquisa e ordena��o:
 * 		-qsort()- ordena os elementos de um array
 * 		Aritm�tica de numeros inteiros:
 * 		-abs()- valores absolutos
 * 		-div() - divis�o inteira (.quot -> cosiente/.rem -> resto)
 *
 */


//Criando uma fun��o para utilizar o qsort:
// � necess�rio dois ponteiros pois sempre ir� ocorrer uma compara��o entre duas posi��es
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

	//strcpy pega um valor e copia para dentro da vari�vel
	strcpy(valor_s, "4.5");


	valor_d = atof(valor_s); //caso fosse informado 4.a o valor � convertido para 4.0
	valor_i = atoi(valor_s); //caso for informado uma letra, o valor retornado � zero

	printf("O valor � %.2f\n", valor_d);
	printf("O valor � %d\n", valor_i);



	//Inicilializando o gerador
	// unsigned - sem sinal
	srand((unsigned) time(&t));

	//Gerando n�meros aleat�rios:
	// Gerar 6 n�meros entre 0 e 60
	for(int i = 0; i < 6; i++){
		// rand se inicia em 0(zero) % <nuumero_especificado> - 1
		printf("%d\n", rand() % 61);
	}
	printf("Valores n�o ordenados:");
	//Ordenando um array:
	for(int i = 0; i < 7; i++){
		printf("%d\n", numeros[i]);
	}
	//qsort(<nome_do_elemento. quantidade_de_elementos, quantidade_de_bytes_ocupada
	// (void*)-> casting na fun��o compara, pois � o tipo de parametros que ele espera como retorno � um ponteiro para um void
	// compara -> informa qual fun��o � utilizada para comparar os dados
	qsort(numeros, 7, sizeof(int), (void *)compara);
	printf("Valores ordenados:");
	for(int i = 0; i < 7; i++){
			printf("%d\n", numeros[i]);
		}
	return 0;
}
