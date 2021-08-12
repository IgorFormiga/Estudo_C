#include <stdio.h>

/*
 * Recursividade: � o ato de uma fun��o chamar a si mesmo
 * obs: � importante que toda fun��o recursiva possua uma condi��o de parada
 */

int fib(int n){
	if(n == 0){
		return 0;
	}else if(n == 1){
		return 1;
	}else{
		return fib(n - 1) + fib(n - 2);
	}
}



int main(){
	int qtd;

	printf("Informe o tamanho da sequencia fibonacci: ");
	fflush(stdout);
	scanf("%d", &qtd);

	for(int i = 0; i < qtd; i++){
		printf("%d ", fib(i+1));
	}

	return 0;
}
