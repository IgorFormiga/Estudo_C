#include <stdio.h>

/*
Matrizes: arrays multi-dimensionais
ex: char nome[l][c]
	l - linha
	c - coluna
 */

int main(){
	//Recebe 3 nomes com até 50 caracteres
	char nome[3][50];

	for(int i = 0; i < 3; i++){
		printf("Digite um nome: ");
		fflush(stdout);
		gets(nome[i]);
	}
	for(int i = 0; i < 3; i++){
		printf("Olá %s\n", nome[i]); // %s faz referencia uma str que é um conjunto de caractres
	}
	return 0;
}
