#include <stdio.h>
/*
 Switch � uma estrura de valida��o
 - Usamos o switch para casos onde tenhamos onde tenhamos uma estrutra grande ou confuso
 de if/else/if else

 #Pseudoc�digo

 Escolha(variavel)
 Inicio
 	 Caso valor1:
 	 	 instru��es
	 Caso valor2:
	 	 instru��es
	 Caso valorn:
 	 	 instru��es
 Fim

 switch(variavel){
 	 case valor1:
 	 	 instru��es;
	 	 break; // � necess�rio colocar um break em cada case
	 caso valor2:
	 	 instru��es;
	 	 break
	 default:  // Caso a vari�vel n�o se encontre nos valores anteriores o valor default ser� executado
	 	 instru��es
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
		printf("Ter�a\n");
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
		printf("Valor inv�lido!");
	}
}
