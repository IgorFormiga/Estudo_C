#include <stdio.h>
#include <math.h>

/*
 * Obs: Para utilizar a biblioteca math:
 * a) Clica com o botão direito do mouse no projeto atual
 * b) Ir em C/C++ Build-> Settings -> Libraries
 * c) Clicar no + e add 'm'
 * d) Aplicar e fechar
 */


/*
* Funções:
* 	Funções trigonometricas:
* 		-cos() //anuglo em radiano
* 		-sin()
* 		-tan()
* 	Funções hipebólicas:
* 		-cosh()
* 		-sinh()
* 		-tanh()
*	Funções exponenciais e logratimicas:
*		-exp()	Função exponencial (retorno é sempre um double)
*		-log()  Logaritmo natural
*		-log10() Logaritmo na base 10
*	Funções de potência:
*		-pow(base, expoente) retorna a base elevada ao expoente (long float)
*		-sqrt() - raiz quadrada de um número (
*	Funções de Arredondamento:
*		-cell() arredonda para cima
*		-floor () arredonda para baixo
*
 */

int main(){
	int angulo = 45;
	float res = cos(angulo);

	printf("O cosseno de %d é %f", angulo, res);


	return 0;
}
