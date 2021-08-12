#include <stdio.h>

/*
ifdef -> � uma diretiva de compila��o
 */

//Faz uma checagem se existe, caso n�o exista � criado
#ifndef PI
	#define PI 3.14567
#endif


int main(){

	printf("PI vale %f\n", (PI * 2));

	// Se existe a defini��o de PI, execute:
	#ifdef PI
		printf("O valor de PI � %f\n", PI);
	#endif

	return 0;
}

