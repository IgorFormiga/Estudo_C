#include <stdio.h>

/*
 * ifndef � uma diretiva de compila��o
 */
//Verifica se a constante "PI" j� foi definida, caso n�o exista � execultado a defini��o
#ifndef PI
	//Declarando constantes(n�o � possivel alterar seu valor):
	#define PI 3.14567
#endif //finaliza




int main(){

	printf("PI vale %f\n", (2 * PI));

	return 0;
}
