#include <stdio.h>

/*
Booleano (Verdadeiro/Falso): true(qualquer n�mero)/false (0)

Na linguagem C, n�o existe um tipo de dado boolean, mas reconehce
reconhece o valor de 0 como falso(false) e qualquer valor diferente
de zero igual a verdadeiro(true)
 */

int main(){
	int booleano = 0;
	//int booleano = 1;

	// Condi��o: booleano is true
	if(booleano){
		printf("Verdadeiro");
	}else{
		printf("Falso");
	}
	return 0;
}
