#include <stdio.h>
#include <string.h>
/*
Struct(estrutura): é uma estrutura de dados que é criada pelo usuário
Dentro de uma struck é possivel adicionar quantas variáveis forem necessárias e de qualquer
tipo.
 */

// Criando uma struct
//st é um préfixo de struct que é utilizado para definir o nome de uma struct
// não é obrigátorio
struct st_aluno{
	char matricula[10];
	char nome[100];
	char curso[50];
	int ano_nascimento;
};//aluno1;	//Declarando a variável já na propria declaração da scruct. Ex: aluno1, aluno2,...;
//É possivel também armazenar as variáveis de structs dentro de um array. Ex: aluno[5]
int main(){
	//Fazendo a declaração das váriáveis de tipo struct
	//struct st_aluno aluno1;
	struct st_aluno aluno[5];

	for(int i = 0; i < 5; i++){
		printf("-------Informe os dados do Aluno %d------\n", i+1);
		printf("Informe a matrícula do aluno: ");
		fflush(stdout);
		// Armazendo a informação dentro de aluno1.matricula, com até 10 caracteres e vai receber
		// do stdin (entrada padrão-teclado)
		fgets(aluno[i].matricula, 10, stdin);

		printf("Informe a nome do aluno: ");
		fflush(stdout);
		fgets(aluno[i].nome, 100, stdin);

		printf("Informe a curso do aluno: ");
		fflush(stdout);
		fgets(aluno[i].curso, 50, stdin);

		printf("Informe a ano de nascimento do aluno: ");
		fflush(stdout);
		scanf("%d", &aluno[i].ano_nascimento);
		// Coloca-se o getchar para que o Enter não seja recebido no fgets
		getchar();
	}
	for(int i = 0; i < 5; i++){
		printf("---------------Dados dos alunos %d--------------\n", i+1);
		printf("Matricula: %s", aluno[i].matricula);
		printf("Nome: %s", aluno[i].nome);
		printf("Curso: %s", aluno[i].curso);
		printf("Ano de Nascimento: %d\n", aluno[i].ano_nascimento);

	}
	return 0;
}
