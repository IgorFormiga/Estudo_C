#include <stdio.h>

// Estrutura de decisão if, else, else if
int main(){
	int idade;
	printf("Qual a sua idade? ");
	fflush(stdout);
	scanf("%d", &idade);

	if(idade < 18){
		printf("Você é menor de idade.\n");
	}else if(idade > 18 && idade <60){		// && = e
		printf("Você é adulto. \n");
	}else{
		printf("Você é idoso\n");
	}

	printf("Sua idade é %d\n", idade);
	return 0;
}
