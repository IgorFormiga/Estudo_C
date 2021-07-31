#include <stdio.h>

/*
Tipos Alfanuméricos:
	- Caracteres(%c): char <variavel>;
	- String*(%s): é um conjunto de caractéres: char <variavel>[50];

Ex:
	string: "Exemplos"
	caracteres: 'c'
Obs*: Na linguagem C, não existe o tipo de dados String
 */


int main(){
	// Declarando uma vátiavel do tipo caractere
	char opcao;

	printf("Informe uma opção: \n");
	printf("a - saldo da conta \n");
	printf("b - Extrato da conta \n");
	printf("c - Limite da conta \n");
	fflush(stdout);
	// Para receber um caractere utiliza-se %c
	scanf("%c", &opcao);

	if(opcao == 'a'){
		printf("a - saldo da conta é ... \n");
	}else if(opcao == 'b'){
		printf("b - Extrato da conta é... \n");
	}else if(opcao == 'c'){
		printf("c - Limite da conta é... \n");
	}else{
		printf("Opção Invalida!");
	}

	return 0;
}
