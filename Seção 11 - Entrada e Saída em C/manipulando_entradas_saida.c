#include <stdio.h>

/*
Para abrir o arquivo para trabalho utiliza-se fopen:
fopen("<nome_arquivo>.format", "forma_de_abertura_do_arquivo")
Formas de abertura:
w - abrir o arquivo para escrita
		-Caso n�o exista o arquivo ele � criado
		-Caso exista o arquivo ele � sobrescrito
r - abrir o arquivo para leitura (n�o pode escrever)
a - abrir o arquivo para adi��o de conteudo
		-Caso exista o arquivo ele adiciona conteudos nele

 */


int main(){
	// para criar um arquivo � necess�rio um tipo especial de dados
	// A vari�vel � um ponteiro que aponta para um arquivo
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
		//feof = File End of File - faz o loop at� chegar ao fim do arquivo
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
			//Resultado == 1 sinifica que foi encontrado um n�mero
			if(resultado == 1){
				soma = soma + numero;
			}
		}
		printf("A soma dos n�meros encontrados � %d", soma);

	}else{
		printf("N�o h� o arquivo");
	}
	//Sempre que finalizar a manipula��o de um arquivo, devemos fecha-lo
	fclose(arq);

	return 0;
}
