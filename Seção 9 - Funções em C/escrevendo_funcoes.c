#include <stdio.h>
/*
main (principal): � a fun��o a ser execultada quando o programa rodar


Estrutura das fun��es:
-tipo de retorno: � o tipo de dado que a fun��o ao ser executada ir� retornar (Ex: int, float)
A fun��o main retorna para o sistema operacional, o retornar 0(zero) significa que ela execultou
com sucesso o programa, caso ela retorna qualquer outra coisa, o sistema operacional ir� colocar
no log que a fun��o foi executada sme sucesso.
Ao se definir um tipo de fun��o(int, float...) � necess�rio definir um retorno que seja do tipo
definido.
Tipo void(vazio): sinifica que a fun��o n�o tem retorno;


 */

void mensagem(){
	printf("Bem vindo!\n");
}

// � necessario definir o tipo de dado de cada par�metro
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
	printf("Ol�!");
	// Para executar uma fun��o definida fora do main: <nome_fun��o>();
	mensagem();

	//Fun��es com par�metros:
	//int retorno = soma(4, 7);
	//printf("Retorno = %d", retorno);
	printf("Retorno = %d\n", soma(4, 7));

	char cara = 'a';
	proximo_char(cara);

	return 0;
}
