#include <stdio.h>

//typedef - redefinir tipos

int main(){
	//Redefine um tipo de dados com outro nome
	typedef float nota;

	//declarando variáveis:
	nota prova1 = 7.0;
	nota prova2 = 8.0;

	nota soma = prova1 + prova2;

	printf("A soma das notqas é %.2f", soma);

	return 0;
}
