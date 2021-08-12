#include <stdio.h>
#include <ctype.h>

/*
 * A biblioteca ctype.h é utilizada para fazer teste de tipos de caracteres
 * 	isalnum() ->verifica se o caractere é alfanumérico (abc456)
 * 	isalpha() -> verifica se o caractere é alfabético (dwagrh)
 * 	isdigit() -> verifica se o caractere é decimal (457521)
 * 	ispunct() -> verifica se o caractere é pontuação (!@#$)
 *  ispace() -> verifica se o caractere é espaço ( )
 *  isupper() -> verifica se é maiúscula
 *  tolower() -> converte para minúscula
 *  toupper() -> converte para maúscula
 *
 *	Obs: toda função começada em "is" retorna um verdadeiro ou falso
 */


int main(){
	char teste = '4';

	if(isalnum(teste)){
		printf("É alfanumérico\n");
	}else{
		printf("Não é alfanumérico\n");
	}


	if(isalpha(teste)){
		printf("É alfabético\n");
	}else{
		printf("Não é alfabético\n");
	}

	if(isdigit(teste)){
		printf("É dígito\n");
	}else{
		printf("Não é dígito\n");
	}



	return 0;
}
