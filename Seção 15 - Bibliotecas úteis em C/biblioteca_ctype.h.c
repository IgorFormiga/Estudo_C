#include <stdio.h>
#include <ctype.h>

/*
 * A biblioteca ctype.h � utilizada para fazer teste de tipos de caracteres
 * 	isalnum() ->verifica se o caractere � alfanum�rico (abc456)
 * 	isalpha() -> verifica se o caractere � alfab�tico (dwagrh)
 * 	isdigit() -> verifica se o caractere � decimal (457521)
 * 	ispunct() -> verifica se o caractere � pontua��o (!@#$)
 *  ispace() -> verifica se o caractere � espa�o ( )
 *  isupper() -> verifica se � mai�scula
 *  tolower() -> converte para min�scula
 *  toupper() -> converte para ma�scula
 *
 *	Obs: toda fun��o come�ada em "is" retorna um verdadeiro ou falso
 */


int main(){
	char teste = '4';

	if(isalnum(teste)){
		printf("� alfanum�rico\n");
	}else{
		printf("N�o � alfanum�rico\n");
	}


	if(isalpha(teste)){
		printf("� alfab�tico\n");
	}else{
		printf("N�o � alfab�tico\n");
	}

	if(isdigit(teste)){
		printf("� d�gito\n");
	}else{
		printf("N�o � d�gito\n");
	}



	return 0;
}
