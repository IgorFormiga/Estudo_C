#include <stdio.h>

/*
Tipos Alfanum�ricos:
	- Caracteres(%c): char <variavel>;
	- String*(%s): � um conjunto de caract�res: char <variavel>[<n�mero_caracteres>];

Ex:
	string: "Exemplos"
	caracteres: 'c'
Obs*: Na linguagem C, n�o existe o tipo de dados String
Obs: toda str para ser finalizada possui \0
	ex: "Igor\0"
 */

int main(){
	//declara��o de uma string em C
	char nome[50]; //vetor = array que suporta at� 49 caracteres

	printf("Qual � seu nome? ");
	fflush(stdout);
	// Para receber uma string utiliza-se gets
	gets(nome);
	// %s para apresentar uma string
	printf("Seu nome � %s", nome);

	return 0;
}
