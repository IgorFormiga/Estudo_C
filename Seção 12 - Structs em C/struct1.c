#include <stdio.h>
#include <string.h>


struct st_contato{
	char nome[100];
	int ano_nascimento;
	char telefone[20];
	char email[100];
};
// Struct que contem um dado do tipo struct
struct st_agenda{
	//st_agenta vai ter capacidade de armazer até 100 dados do tipo struct
	//contatos[100] é um array
	struct st_contato contatos[100];
}agenda;


int main(){
	//struct st_agenda agenda;
	for(int i = 0; i < 3; i++){
		printf("-------Informe os dados do Contato %d------\n", i+1);
		printf("Informe o nome: ");
		fflush(stdout);
		// Armazendo a informação dentro de aluno1.matricula, com até 10 caracteres e vai receber
		// do stdin (entrada padrão-teclado)
		fgets(agenda.contatos[i].nome, 100, stdin);

		printf("Informe o ano de nascimento: ");
		fflush(stdout);
		scanf("%d", &agenda.contatos[i].ano_nascimento);
		getchar();

		printf("Informe o telefone: ");
		fflush(stdout);
		fgets(agenda.contatos[i].telefone, 20, stdin);

		printf("Informe o email: ");
		fflush(stdout);
		fgets(agenda.contatos[i].email, 100, stdin);
		// Coloca-se o getchar para que o Enter não seja recebido no sgets

	}
	// strtok - é uma função da bibloteca string.h
	// Sua função é verificar se há "\n" (Enter) ele remove e imprime
	for(int i = 0; i < 3; i++){
		printf("---------------Dados dos Contato %d--------------\n", i+1);
		printf("Nome: %s\n", strtok(agenda.contatos[i].nome, "\n"));
		printf("Ano de Nascimento: %d\n", agenda.contatos[i].ano_nascimento);
		printf("Telefone: %s\n", strtok(agenda.contatos[i].telefone, "\n"));
		printf("E-mail: %s\n", strtok(agenda.contatos[i].email, "\n"));

	}
	return 0;
}
