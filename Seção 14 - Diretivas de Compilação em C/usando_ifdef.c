#include <stdio.h>

/*
ifdef -> é uma diretiva de compilação
 */

//Faz uma checagem se existe, caso não exista é criado
#ifndef PI
	#define PI 3.14567
#endif


int main(){

	printf("PI vale %f\n", (PI * 2));

	// Se existe a definição de PI, execute:
	#ifdef PI
		printf("O valor de PI é %f\n", PI);
	#endif

	return 0;
}

