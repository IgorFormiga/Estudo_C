#include <stdio.h>

/*
Para abrir o arquivo para trabalho utiliza-se fopen:
fopen("<nome_arquivo>.format", "forma_de_abertura_do_arquivo")
Formas de abertura:
w - abrir o arquivo para escrita
		-Caso não exista o arquivo ele é criado
		-Caso exista o arquivo ele é sobrescrito
r - abrir o arquivo para leitura (não pode escrever)
a - abrir o arquivo para adição de conteudo
		-Caso exista o arquivo ele adiciona conteudos nele

 */


int main(){
	// para criar um arquivo é necessário um tipo especial de dados
	// A variável é um ponteiro que aponta para um arquivo
	FILE *arq;
	FILE *num;
	//char c;
	//char nome[10], *resultado;
	int numero, resultado, soma = 0;

	arq = fopen("arquivo.txt", "r");
	num = fopen("num.txt","r");
	//Verificando se existe o arq:
	if(arq){
		//Primeiro Exemplo:
		//getc = pegar caracterer a caracterer
		// EOF = End of File -Fim do arquivo
		/*
		while((c = getc(arq)) != EOF){
			printf("%c", c);
		}
		*/

		//Segundo Exemplo:
		/*
		//feof = File End of File - faz o loop até chegar ao fim do arquivo
		while((! feof(arq))){
			//fgets - leitura do arquivo
			// pega os 10 primeiros caracteres e colocar na variavel nomes
			resultado = fgets(nome, 10, arq);
			printf("Resultado: %d\n", resultado);
			if(resultado){
				printf("%s", nome);
			}
		}
		*/

		//Terceiro Exemplo
		while(! feof(num)){
			resultado = fscanf(num, "%d", &numero);
			printf("Resultado = %d\n", resultado);
			//Resultado == 1 sinifica que foi encontrado um número
			if(resultado == 1){
				soma = soma + numero;
			}
		}
		printf("A soma dos números encontrados é %d", soma);

	}else{
		printf("Não há o arquivo");
	}
	//Sempre que finalizar a manipulação de um arquivo, devemos fecha-lo
	fclose(arq);

	return 0;
}
