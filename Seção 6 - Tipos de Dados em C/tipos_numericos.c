#include <stdio.h>

/*
Tipos Num�ricos:
	Inteiros:
		-int(%d)
	Reais:
		-float (%f):
		-double (%lf): suporta uma quantidade maior de dados

Para limitar o n�mero de casas decimais utiliza-se %.n<tipo>
onde n � o n�mero de casas decimais e <tipo> � o tipo num�rico(f,d,..)
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
	printf("Sua m�dia � %.2f", media);
}
