#include <stdio.h>

/*
Matrizes multi-dimensional
Ex: n[2][2]
Representação
	[00][01]
	[10][11]
 */


int main(){
	int numeros[2][2];
	numeros[0][0] = 0;
	numeros[0][1] = 1;
	numeros[1][0] = 2;
	numeros[1][1] = 3;

	float valor[3][3], n = 0.1;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			valor[i][j] = n;
			n = n + 0.1;
		}
	}
	printf("Valores da matriz Interiro\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("numeros[%d][%d] == %d\n", i, j, numeros[i][j]);
		}
	}

	printf("Valores da matriz Float\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("valor[%d][%d] == %.1f\n", i, j, valor[i][j]);
		}
	}
	return 0;
}
