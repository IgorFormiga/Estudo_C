#include <stdio.h>

int main(){

	int n, i = 1, nlinha = 1;
	printf("Digite um número de linhas: ");
	fflush(stdout);
	scanf("%d", &n);

	do{
		for(int c = 0; c < nlinha; c++){
			printf("%d ", i);
			i = i + 1;
		}
		printf("\n");
		nlinha = nlinha + 1;
	}while(nlinha < n + 1);
	return 0;
}
