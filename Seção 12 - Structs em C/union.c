#include <stdio.h>
#include <string.h>

// Quando se declara uma union, não importa a quantidade de variáveis definidas dentro dela
// a union sempre vai separar/ocupar o espaço de memoria da maior das variáveis
//Union sobreescreve os dados armazenados, logo quando um dado é sobreescrito ele não é recuperado
union pessoa{
	char nome[100]; // 1 char -> 1byte -> 1*100 = 100bytes
	int idade; // 4 bytes
};


int main(){

	union pessoa pes;

	//copia para dentro da variável uma string
	strcpy(pes.nome, "Angelina Jolie");
	printf("Dados de %s\n", pes.nome);

	pes.idade = 39;
	printf("ela tem %d anos\n", pes.idade);

	printf("A variável 'pes' está ocupando %ld bytes em memória", sizeof(pes));


	return 0;
}
