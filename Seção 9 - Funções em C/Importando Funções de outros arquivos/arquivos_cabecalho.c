// Bibliotecas incluidas no compilador C
#include <stdio.h>
//Bibliotecas criadas
#include "ajuda.h"

/*
Os arquivos no formato ".h" n�o possui implementa��o das fun��es utilizadas, possui apenas
os prot�tipos de fun��es. As implementa��es est�o em um arquivo no formato ".c" que possui
o mesmo nome do aquivo ".h".
 */


int main(){
	int n1, n2, ret_s, ret_m;

	mensagem();

	printf("Informe o primeiro n�mero: ");
	fflush(stdout);
	scanf("%d", &n1);

	printf("Informe o segundo n�mero: ");
	fflush(stdout);
	scanf("%d", &n2);

	ret_s = soma(n1, n2);
	printf("A soma de %d com %d � %d\n", n1, n2, ret_s);

	ret_m = mult(n1, n2);
	printf("A multiplica��o de %d com %d � %d", n1, n2, ret_m);



	return 0;
}
