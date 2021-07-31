#include <stdio.h>

/*
Tipos Numéricos:
	Inteiros:
		-int(%d)
	Reais:
		-float (%f):
		-double (%lf): suporta uma quantidade maior de dados

Para limitar o número de casas decimais utiliza-se %.n<tipo>
onde n é o número de casas decimais e <tipo> é o tipo numérico(f,d,..)
 */

int main(){
	float media, nota1, nota2;
	//double outra_media;

	printf("Qual a sua primeira nota? ");
	fflush(stdout);
	scanf("%f", &nota1);

	printf("Qual a segunda nota? ");
	fflush(stdout);
	scanf("%f", &nota2);

	media = (nota1 + nota2) / 2;
	printf("Sua média é %.2f", media);
}
