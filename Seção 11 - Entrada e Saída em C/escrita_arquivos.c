#include <stdio.h>

int main(){
	FILE *arq;
	char fruta[10];


	arq = fopen("frutas.txt", "a");

	if(arq){
		//Conseguir criar o arquivo:
		printf("Informe uma fruta, ou 0 para sair: \n");
		fflush(stdout);
		fgets(fruta, 10, stdin); // stdin = entrada padrão
		while(fruta[0] != '0'){
			fputs(fruta, arq);
			printf("Informe uma fruta, ou 0 para sair: \n");
			fflush(stdout);
			fgets(fruta, 10, stdin); // stdin = entrada padrão
		}

	}else{
		// Não foi possivel criar um arquivo
		printf("Não foi possível criar o arquivo.");
	}
}
