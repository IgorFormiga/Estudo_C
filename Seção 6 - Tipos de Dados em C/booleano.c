#include <stdio.h>

/*
Booleano (Verdadeiro/Falso): true(qualquer número)/false (0)

Na linguagem C, não existe um tipo de dado boolean, mas reconehce
reconhece o valor de 0 como falso(false) e qualquer valor diferente
de zero igual a verdadeiro(true)
 */

int main(){
	int booleano = 0;
	//int booleano = 1;

	// Condição: booleano is true
	if(booleano){
		printf("Verdadeiro");
	}else{
		printf("Falso");
	}
	return 0;
}
