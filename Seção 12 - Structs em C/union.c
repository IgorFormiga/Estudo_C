#include <stdio.h>
#include <string.h>

// Quando se declara uma union, n�o importa a quantidade de vari�veis definidas dentro dela
// a union sempre vai separar/ocupar o espa�o de memoria da maior das vari�veis
//Union sobreescreve os dados armazenados, logo quando um dado � sobreescrito ele n�o � recuperado
union pessoa{
	char nome[100]; // 1 char -> 1byte -> 1*100 = 100bytes
	int idade; // 4 bytes
};


int main(){

	union pessoa pes;

	//copia para dentro da vari�vel uma string
	strcpy(pes.nome, "Angelina Jolie");
	printf("Dados de %s\n", pes.nome);

	pes.idade = 39;
	printf("ela tem %d anos\n", pes.idade);

	printf("A vari�vel 'pes' est� ocupando %ld bytes em mem�ria", sizeof(pes));


	return 0;
}
