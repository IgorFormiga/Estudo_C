#include <stdio.h>

/*
Matrizes: arrays multi-dimensionais
ex: char nome[l][c]
	l - linha
	c - coluna
 */

int main(){
	//Recebe 3 nomes com at� 50 caracteres
	char nome[3][50];

	for(int i = 0; i < 3; i++){
		printf("Digite um nome: ");
		fflush(stdout);
		gets(nome[i]);
	}
	for(int i = 0; i < 3; i++){
		printf("Ol� %s\n", nome[i]); // %s faz referencia uma str que � um conjunto de caractres
	}
	return 0;
}
