#include <stdio.h>

/*
Enum -> Enumeração
Enum é um tipo de estrutra de dados que se armazena valores pré-definidos (constantes),
restringindo a utilização/escolha de valores apenas aos que estão armazenados.
Os valores armazenados são indexados a partir da ordem de definição.

Obs: É possivel acessar áreas que não foram definidas(particularidade da lingugaem C,
por isso é necessário cuidado
 */

enum dias_semana{
	segunda,
	terca,
	quarta,
	quinta,
	sexta,
	sabado,
	domingo
};

int main(){
	//Criando duas variáveis do tipo enum
	enum dias_semana d1, d2;

	d1 = quinta;
	// Como os valores são indexados é possivel utilizar o valor do indece para definir a variável
	d2 = 3;

	if(d1 == d2){
		printf("Os dias são iguais.");
	}else{
		printf("Os dias não são iguais");
	}



	return 0;
}
