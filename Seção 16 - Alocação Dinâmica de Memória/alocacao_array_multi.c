#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p, linhas = 3, colunas = 3;

	p = (int*)malloc(linhas * colunas * sizeof(int));

	if(p){
		for(int i = 0; i < linhas; i++){
			for(int j = 0; j < colunas; j++){
				p[i * colunas + j] = 3 * i + j;
			}
		}

		for(int i = 0; i < linhas; i++){
			for(int j = 0; j < colunas; j++){
				printf("%d\n", p[i * colunas + j]);
			}
		}
	}else{
		printf("Não foi possivel fazer a alocação da memória!");
	}
	free(p);
	p = NULL;
	return 0;
}
