#include <stdio.h>

int main(){
	/*
	Se houver menos inicializadores em uma lista entre chaves do que elementos ou membros de um agregado,
	ou menos caracteres em um literal de string usado para inicializar uma matriz de tamanho
	conhecido do que elementos na matriz, o restante do agregado deve ser inicializado implicitamente da mesma forma
	que os objetos que têm duração de armazenamento estático.
	 */
	int n, vetor1[50] = {0}, vetor2[50] = {0}, nlinhas = 0, e = 1, copia = 0, s;

	printf("Digite um número inteiro positivo: ");
	fflush(stdout);
	scanf("%d", &n);

	vetor2[0] = 1;
	//printf("%d\n", vetor2[0]);

	while(nlinhas < n){
		// Criando o vetor1 a partir do vetor 2
		for(int i = 0; i < e; i++){
			if(i == 0){
				vetor1[0] = 1;
				printf("%d ", vetor1[0]);
			}else{
				printf("%d", i);
				vetor1[i] = (int)vetor2[i] + (int)vetor2[i+1];
				printf("%d ", vetor1[i]);
			}
		}
		printf(" \n");
		// Atribuido o vetor 1 no vetor 2
		while(vetor1[copia] != 0){
			vetor1[copia] = vetor2[copia];
			vetor1[copia] = 0;
			copia = copia + 1;
		}

		e = e + 1;
		nlinhas = nlinhas + 1;
	}
	return 0;
}
