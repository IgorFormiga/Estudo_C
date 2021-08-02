#include <stdio.h>
/*
main (principal): é a função a ser execultada quando o programa rodar


Estrutura das funções:
-tipo de retorno: é o tipo de dado que a função ao ser executada irá retornar (Ex: int, float)
A função main retorna para o sistema operacional, o retornar 0(zero) significa que ela execultou
com sucesso o programa, caso ela retorna qualquer outra coisa, o sistema operacional irá colocar
no log que a função foi executada sme sucesso.
Ao se definir um tipo de função(int, float...) é necessário definir um retorno que seja do tipo
definido.
Tipo void(vazio): sinifica que a função não tem retorno;


 */

void mensagem(){
	printf("Bem vindo!\n");
}

// É necessario definir o tipo de dado de cada parâmetro
int soma(int num1, int num2){
	return num1 + num2;
}

char retorna_char(char caractere){
	return caractere;
}

void proximo_char(char caractere){
	printf("%c", caractere + 1);
}


int main(){
	printf("Olá!");
	// Para executar uma função definida fora do main: <nome_função>();
	mensagem();

	//Funções com parâmetros:
	//int retorno = soma(4, 7);
	//printf("Retorno = %d", retorno);
	printf("Retorno = %d\n", soma(4, 7));

	char cara = 'a';
	proximo_char(cara);

	return 0;
}
