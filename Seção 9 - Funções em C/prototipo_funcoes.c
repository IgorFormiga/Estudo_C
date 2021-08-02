#include <stdio.h>
/*
Prot�tipo de fun��o: servem para indica para o main quais fun��es ser�o
utilizadas dentro dela e que est�o declarados/implementados ap�s a declara��o do main

Assinatura das fun��es:
- tipo de retorno
- nome
- par�metros de entrada (opcional)
 */

int soma(int num1, int num2);
void mensagem();


int main(){
	int n1, n2, ret;
	mensagem();
	printf("Informe o primeiro n�mero: ");
	fflush(stdout);
	scanf("%d", &n1);

	printf("Informe o segundo n�mero: ");
	fflush(stdout);
	scanf("%d", &n2);

	ret = soma(n1, n2);

	printf("A soma entre %d com %d � %d", n1, n2, ret);
}



int soma(int num1, int num2){
	return num1 + num2;
}


void mensagem(){
	printf("Bem vindo! \n");
}
