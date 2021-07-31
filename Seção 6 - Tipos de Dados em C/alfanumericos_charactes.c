#include <stdio.h>

/*
Tipos Alfanum�ricos:
	- Caracteres(%c): char <variavel>;
	- String*(%s): � um conjunto de caract�res: char <variavel>[50];

Ex:
	string: "Exemplos"
	caracteres: 'c'
Obs*: Na linguagem C, n�o existe o tipo de dados String
 */


int main(){
	// Declarando uma v�tiavel do tipo caractere
	char opcao;

	printf("Informe uma op��o: \n");
	printf("a - saldo da conta \n");
	printf("b - Extrato da conta \n");
	printf("c - Limite da conta \n");
	fflush(stdout);
	// Para receber um caractere utiliza-se %c
	scanf("%c", &opcao);

	if(opcao == 'a'){
		printf("a - saldo da conta � ... \n");
	}else if(opcao == 'b'){
		printf("b - Extrato da conta �... \n");
	}else if(opcao == 'c'){
		printf("c - Limite da conta �... \n");
	}else{
		printf("Op��o Invalida!");
	}

	return 0;
}
