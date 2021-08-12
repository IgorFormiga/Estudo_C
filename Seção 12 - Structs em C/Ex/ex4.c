#include <stdio.h>
#include <string.h>

struct st_dados{
	char nome[20];
	int matricula;
	float n1;
	float n2;
	float n3;
	float media;
};

int main(){
	struct st_dados alunos[5];
	float maior_1nota = 0.0, maior_media = 0.0, menor_media = 10.0;
	int aluno_maior_nota1, aluno_maior_media, aluno_menor_media;
	//char aluno_maior_nota1[20], aluno_maior_media[20], aluno_menor_media[20];

	for(int i = 0; i < 5; i++){
		printf("--------Cadastro do aluno %d--------\n", i+1);
		printf("Digite o nome: ");
		fflush(stdout);
		fgets(alunos[i].nome, 20, stdin);
		//getchar();

		printf("Digite a matricula: ");
		fflush(stdout);
		scanf("%d", &alunos[i].matricula);

		printf("Digite a primeira nota: ");
		fflush(stdout);
		scanf("%f", &alunos[i].n1);

		printf("Digite a segunda nota: ");
		fflush(stdout);
		scanf("%f", &alunos[i].n2);

		printf("Digite a terceira nota: ");
		fflush(stdout);
		scanf("%f", &alunos[i].n3);
		getchar();

		alunos[i].media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3) / 3;


	}
	printf("----------Resultados -----------\n");
	for(int i = 0; i < 5; i++){
		printf("----------Aluno: %s -----------\n", strtok(alunos[i].nome, "\n"));
		printf("1º nota: %.2f\n", alunos[i].n1);
		printf("2º nota: %.2f\n", alunos[i].n2);
		printf("3º nota: %.2f\n", alunos[i].n3);
		printf("Média: %.2f\n", alunos[i].media);

		if(alunos[i].media < 6){
			printf("Situação: Reprovado\n");
		}else{
			printf("Situação: Aprovado\n");
		}
	}
	printf("----------Dados Adicionais -----------\n");
	for(int i = 0; i < 5; i++){
		if(alunos[i].n1 > maior_1nota){
			maior_1nota = alunos[i].n1;
			aluno_maior_nota1 = i;
		}

		if(alunos[i].media > maior_media){
			maior_media = alunos[i].media;
			aluno_maior_media = i;
		}
		if(alunos[i].media < menor_media){
			menor_media = alunos[i].media;
			aluno_menor_media = i;
		}
	}
	printf("Aluno com maior nota da primeira prova: %s\n", alunos[aluno_maior_nota1].nome);
	printf("Aluno com maior média: %s\n", alunos[aluno_maior_media].nome);
	printf("Aluno com menor média: %s\n", alunos[aluno_menor_media].nome);


	return 0;
}
