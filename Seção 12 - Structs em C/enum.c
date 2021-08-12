#include <stdio.h>

/*
Enum -> Enumera��o
Enum � um tipo de estrutra de dados que se armazena valores pr�-definidos (constantes),
restringindo a utiliza��o/escolha de valores apenas aos que est�o armazenados.
Os valores armazenados s�o indexados a partir da ordem de defini��o.

Obs: � possivel acessar �reas que n�o foram definidas(particularidade da lingugaem C,
por isso � necess�rio cuidado
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
	//Criando duas vari�veis do tipo enum
	enum dias_semana d1, d2;

	d1 = quinta;
	// Como os valores s�o indexados � possivel utilizar o valor do indece para definir a vari�vel
	d2 = 3;

	if(d1 == d2){
		printf("Os dias s�o iguais.");
	}else{
		printf("Os dias n�o s�o iguais");
	}



	return 0;
}
