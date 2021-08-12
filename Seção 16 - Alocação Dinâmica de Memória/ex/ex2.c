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
			printf("Informe o valor para a posição %d do vetor: ", i);
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
		printf("Há %d números pares\n", par);
		printf("Há %d números impares\n", impar);
		printf("O vetor 'p' ocupa %d bytes de memória\n", t * sizeof(int));

	}else{
		printf("Não foi possível alocar a memória");
	}

	free(p);
	p = NULL;
	return 0;
}
