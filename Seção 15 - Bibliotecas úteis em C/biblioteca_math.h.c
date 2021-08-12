#include <stdio.h>
#include <math.h>

/*
 * Obs: Para utilizar a biblioteca math:
 * a) Clica com o bot�o direito do mouse no projeto atual
 * b) Ir em C/C++ Build-> Settings -> Libraries
 * c) Clicar no + e add 'm'
 * d) Aplicar e fechar
 */


/*
* Fun��es:
* 	Fun��es trigonometricas:
* 		-cos() //anuglo em radiano
* 		-sin()
* 		-tan()
* 	Fun��es hipeb�licas:
* 		-cosh()
* 		-sinh()
* 		-tanh()
*	Fun��es exponenciais e logratimicas:
*		-exp()	Fun��o exponencial (retorno � sempre um double)
*		-log()  Logaritmo natural
*		-log10() Logaritmo na base 10
*	Fun��es de pot�ncia:
*		-pow(base, expoente) retorna a base elevada ao expoente (long float)
*		-sqrt() - raiz quadrada de um n�mero (
*	Fun��es de Arredondamento:
*		-cell() arredonda para cima
*		-floor () arredonda para baixo
*
 */

int main(){
	int angulo = 45;
	float res = cos(angulo);

	printf("O cosseno de %d � %f", angulo, res);


	return 0;
}
