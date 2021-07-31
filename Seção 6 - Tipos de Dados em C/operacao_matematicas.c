#include <stdio.h>

/*
somar +
subtrair -
multiplicar *
dividir /
resto da divisão %
 */

int main(){
	// Divisão
	int n1 = 3, n2 = 5;
	float res;
	// cast: conversão de um tipo de dados
	res = (float)n1 / (float)n2;  // Só é valido a conversão durante a essa equação
	printf("A divisão de %d por %d é %f", n1, n2, res);

	return 0;
}
