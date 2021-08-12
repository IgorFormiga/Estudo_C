#include <stdio.h>
#include <stdlib.h>
// https://pt.stackoverflow.com/questions/213596/remover-e-recolocar-vogais-em-frase-qualquer-c


int main(){
	int tam, n = 0;
	char *p;
	//Recebendo o tamanho da str
	printf("Digite o tamanho da str: ");
	fflush(stdout);
	scanf("%d", &tam);
	getchar();

	//Alocando o espaço na memória
	p = (char*)calloc(tam, sizeof(char));

	printf("Digite a str: ");
	fflush(stdout);
	gets(p);

	printf("Vogais removidas: ");
	for(int i = 0; i < tam; i++){
		if((p[i] == 'a')||(p[i] == 'A')){
			printf("%c ", p[i]);
			for(int k = i; k < tam; k++){
				p[k] = p[k+1];
			}
			n = n + 1;
		}
		if((p[i] == 'e')||(p[i] == 'E')){
			printf("%c ", p[i]);
			for(int k = i; k < tam; k++){
				p[k] = p[k+1];
			}
			n = n + 1;
		}
		if((p[i] == 'i')||(p[i] == 'I')){
			printf("%c ", p[i]);
			for(int k = i; k < tam; k++){
				p[k] = p[k+1];
			}
			n = n + 1;
		}
		if((p[i] == 'o')||(p[i] == 'O')){
			printf("%c ", p[i]);
			for(int k = i; k < tam; k++){
				p[k] = p[k+1];
			}
			n = n + 1;
		}
		if((p[i] == 'u')||(p[i] == 'U')){
			printf("%c ", p[i]);
			for(int k = i; k < tam; k++){
				p[k] = p[k+1];
			}
			n = n + 1;
		}
		if(n == 2){
			break;
		}
	}
	printf("\nNome digitado sem duas vogais: %s", p);

	//Liberando o espaço na memória e removendo o ponteiro
	free(p);
	p = NULL;
	return 0;
}
