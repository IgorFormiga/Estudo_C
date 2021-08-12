#include <stdio.h>

/*
int = 4bytes
bit 0 / 1
1 byte ==  0000 0001
4 bytes == 0000 0000 0000 0000 0000 0000 0000 0001 -> representa o n�mero 1
 */
int main(){

	int valores[5] = {1, 2, 3, 4, 5};

	for(int i= 0; i < 5; i++){
		// sizeof -> indica a quantidade de bytes de uma vari�vael na mem�ria
		printf("O valor %d tem %ld bytes \n", valores[i], sizeof(valores[i]));
	}
	printf("O array valores possui %ld bytes\n", sizeof(valores));

	printf("valores[0] vale %d e endere�o de mem�ria � %p\n", valores[0], valores[0]);
	printf("*(valores) vale %d e endere�o de mem�ria � %p\n", *(valores), *(valores));

	//Acessando o segundo elemento do array utilizando ponteiros
	printf("*(valores+1) vale %d e endere�o de mem�ria � %p\n", *(valores+1), *(valores+1));
	printf("*(valores+2) vale %d e endere�o de mem�ria � %p\n", *(valores+2), *(valores+2));
	return 0;
}
