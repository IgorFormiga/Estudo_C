#include <stdio.h>

/*
somar +
subtrair -
multiplicar *
dividir /
resto da divis�o %
 */

int main(){
	// Divis�o
	int n1 = 3, n2 = 5;
	float res;
	// cast: convers�o de um tipo de dados
	res = (float)n1 / (float)n2;  // S� � valido a convers�o durante a essa equa��o
	printf("A divis�o de %d por %d � %f", n1, n2, res);

	return 0;
}
