#include <stdio.h>

int main(){

	//vetores de inteiros
	int numeros[3]; //0...2

	numeros[0] = 1;
	numeros[1] = 3;
	numeros[2] = 5;

	//vetores float
	float valores[3];

	for(int i = 0; i < 3; i++){
		valores[i] = (float)numeros[i] / (float)2;
	}

	for(int i = 2; i >= 0; i--){
		printf("%.1f\n", valores[i]);
	}
}
