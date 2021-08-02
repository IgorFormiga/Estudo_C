#include <stdio.h>
/*
Protótipo de função: servem para indica para o main quais funções serão
utilizadas dentro dela e que estão declarados/implementados após a declaração do main

Assinatura das funções:
- tipo de retorno
- nome
- parâmetros de entrada (opcional)
 */

int soma(int num1, int num2);
void mensagem();


int main(){
	int n1, n2, ret;
	mensagem();
	printf("Informe o primeiro número: ");
	fflush(stdout);
	scanf("%d", &n1);

	printf("Informe o segundo número: ");
	fflush(stdout);
	scanf("%d", &n2);

	ret = soma(n1, n2);

	printf("A soma entre %d com %d é %d", n1, n2, ret);
}



int soma(int num1, int num2){
	return num1 + num2;
}


void mensagem(){
	printf("Bem vindo! \n");
}
