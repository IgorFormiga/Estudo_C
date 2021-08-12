#include <stdio.h>
#include <stdlib.h>

int main(){
	int t, *p, impar = 0, par = 0;

	printf("Digite o tamanho do vetor a ser lido: ");
	fflush(stdout);
	scanf("%d", &t);

	p = (int*)calloc(t, sizeof(int));

	if(p){
		for(int i = 0; i < t; i++){
			printf("Informe o valor para a posi��o %d do vetor: ", i);
			fflush(stdout);
			scanf("%d", &p[i]);
		}
		for(int i = 0; i < t; i++){
			if(p[i] % 2 == 0){
				par = par + 1;
			}else{
				impar = impar + 1;
			}
			printf("p[%d] = %d\n", i, p[i]);
		}
		printf("H� %d n�meros pares\n", par);
		printf("H� %d n�meros impares\n", impar);
		printf("O vetor 'p' ocupa %d bytes de mem�ria\n", t * sizeof(int));

	}else{
		printf("N�o foi poss�vel alocar a mem�ria");
	}

	free(p);
	p = NULL;
	return 0;
}
