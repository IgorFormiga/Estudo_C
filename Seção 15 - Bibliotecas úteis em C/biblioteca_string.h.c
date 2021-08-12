#include <stdio.h>
#include <string.h>

/*
 * string.h � utilizado para fazer opera��es com strings
 * 	strcpy() - utilizado para copia de string
 * 	strcat() - utilizado para concatenar strings
 *	strcmp() - utilizado para comparar duas str s�o diferentes (!= -> True/ == -> False)
 *	Busca em uma str:
 *		strchr() - localiza a primeira ocorrencia de caractere em uma str
 *		strtok() - divide uma string em sub string com base em um caracterer
 *	strlen() - 	retorna o tamanho da str
 */

int main(){
	char str1[20], str2[20];
	char str3[] = "pedro@gmail.com";
	char car = '@';
	// Cria uma vari�vel que � um ponteiro para um caracterer
	// strchr(<str_a_ser_procurada>,<caracterer>)
	char *ret = strchr(str3, car);
	//Copiando o valor para dentro da vari�vel
	strcpy(str1, "Quinta ");
	strcpy(str2, "feira");

	//verificando se duas str s�o diferentes:
	if(strcmp(str1, str2)){
		printf("N�o s�o iguais!\n");
	}else{
		printf("S�o iguais!\n");
	}

	// Coloca o valor de str2 junto de str1
	strcat(str1, str2);

	printf("%s\n", str1);

	printf("A partir do %c est� %s\n", car, ret);
	printf("O tamanho da str � %d\n", strlen(str3));
	printf("Usu�rio: %s", strtok(str3, "@"));

	return 0;
}
