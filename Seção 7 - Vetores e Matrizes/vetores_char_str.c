#include <stdio.h>

/*
Vetores: array uni-dimensional
Ex: char nome[50]
	int numeros[10]
	float valores[15]
 */

int main(){
	//Vetores e strings
	char nome[50];
	printf("Digite seu nome: ");
	fflush(stdout);
	gets(nome);
	printf("ola %s\n", nome);

	//Vetores e caracteres:
	char letras[26]; //0..25
	int contador = 0;
	for(int i = 97; i <= 122; i++){
		letras[contador] = i;
		contador = contador + 1;
	}
	// Immprimir o vetor:
	for(int i = 0; i < 26; i++){
		printf("%d == %c\n", letras[i], letras[i]);
	}

	return 0;
}
