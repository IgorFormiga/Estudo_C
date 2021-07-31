#include <stdio.h>

/*
Tipos Alfanuméricos:
	- Caracteres(%c): char <variavel>;
	- String*(%s): é um conjunto de caractéres: char <variavel>[<número_caracteres>];

Ex:
	string: "Exemplos"
	caracteres: 'c'
Obs*: Na linguagem C, não existe o tipo de dados String
Obs: toda str para ser finalizada possui \0
	ex: "Igor\0"
 */

int main(){
	//declaração de uma string em C
	char nome[50]; //vetor = array que suporta até 49 caracteres

	printf("Qual é seu nome? ");
	fflush(stdout);
	// Para receber uma string utiliza-se gets
	gets(nome);
	// %s para apresentar uma string
	printf("Seu nome é %s", nome);

	return 0;
}
