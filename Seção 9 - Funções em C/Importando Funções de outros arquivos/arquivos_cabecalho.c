// Bibliotecas incluidas no compilador C
#include <stdio.h>
//Bibliotecas criadas
#include "ajuda.h"

/*
Os arquivos no formato ".h" não possui implementação das funções utilizadas, possui apenas
os protótipos de funções. As implementações estão em um arquivo no formato ".c" que possui
o mesmo nome do aquivo ".h".
 */


int main(){
	int n1, n2, ret_s, ret_m;

	mensagem();

	printf("Informe o primeiro número: ");
	fflush(stdout);
	scanf("%d", &n1);

	printf("Informe o segundo número: ");
	fflush(stdout);
	scanf("%d", &n2);

	ret_s = soma(n1, n2);
	printf("A soma de %d com %d é %d\n", n1, n2, ret_s);

	ret_m = mult(n1, n2);
	printf("A multiplicação de %d com %d é %d", n1, n2, ret_m);



	return 0;
}
