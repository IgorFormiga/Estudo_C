#include <stdio.h>

// Estrutura de decis�o if, else, else if
int main(){
	int idade;
	printf("Qual a sua idade? ");
	fflush(stdout);
	scanf("%d", &idade);

	if(idade < 18){
		printf("Voc� � menor de idade.\n");
	}else if(idade > 18 && idade <60){		// && = e
		printf("Voc� � adulto. \n");
	}else{
		printf("Voc� � idoso\n");
	}

	printf("Sua idade � %d\n", idade);
	return 0;
}
