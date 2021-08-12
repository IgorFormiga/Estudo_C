#include <stdio.h>

/*
 * ifndef é uma diretiva de compilação
 */
//Verifica se a constante "PI" já foi definida, caso não exista é execultado a definição
#ifndef PI
	//Declarando constantes(não é possivel alterar seu valor):
	#define PI 3.14567
#endif //finaliza




int main(){

	printf("PI vale %f\n", (2 * PI));

	return 0;
}
