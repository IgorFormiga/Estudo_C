#include <stdio.h>

int main(){
	FILE *arq;
	char fruta[10];


	arq = fopen("frutas.txt", "a");

	if(arq){
		//Conseguir criar o arquivo:
		printf("Informe uma fruta, ou 0 para sair: \n");
		fflush(stdout);
		fgets(fruta, 10, stdin); // stdin = entrada padr�o
		while(fruta[0] != '0'){
			fputs(fruta, arq);
			printf("Informe uma fruta, ou 0 para sair: \n");
			fflush(stdout);
			fgets(fruta, 10, stdin); // stdin = entrada padr�o
		}

	}else{
		// N�o foi possivel criar um arquivo
		printf("N�o foi poss�vel criar o arquivo.");
	}
}
