#include <stdio.h>
/*
 Switch é uma estrura de validação
 - Usamos o switch para casos onde tenhamos onde tenhamos uma estrutra grande ou confuso
 de if/else/if else

 #Pseudocódigo

 Escolha(variavel)
 Inicio
 	 Caso valor1:
 	 	 instruções
	 Caso valor2:
	 	 instruções
	 Caso valorn:
 	 	 instruções
 Fim

 switch(variavel){
 	 case valor1:
 	 	 instruções;
	 	 break; // é necessário colocar um break em cada case
	 caso valor2:
	 	 instruções;
	 	 break
	 default:  // Caso a variável não se encontre nos valores anteriores o valor default será executado
	 	 instruções
 }
 */

int main(){
	int valor;

	printf("Digite um valor de 1 a 7: ");
	fflush(stdout);
	scanf("%d", &valor);

	switch(valor){
	case 1:
		printf("Domingo\n");
		break;
	case 2:
		printf("Segunda\n");
		break;
	case 3:
		printf("Terça\n");
		break;
	case 4:
		printf("Quarta\n");
		break;
	case 5:
		printf("Quinta\n");
		break;
	case 6:
		printf("Sexta\n");
		break;
	case 7:
		printf("Sabado\n");
		break;
	default:
		printf("Valor inválido!");
	}
}
