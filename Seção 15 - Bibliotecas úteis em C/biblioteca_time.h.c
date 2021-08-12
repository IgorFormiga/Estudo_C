#include <stdio.h>
#include <time.h>

/*
 * time.h: funções de time e hora
 * 	clock() - retorna o número de pulsos de clock decorrido desde que o programa foi lançado/inciado
 *	time() - retorna o tempo atual do calendario
 *	localtime() - converte o valor time para uma hora local
 *
 */


int main(){
	int inicio_t, fim_t, total_t;
	time_t tempobruto;
	struct tm *info;

	time(&tempobruto);
	info = localtime(&tempobruto);
	//asctime pega a hora de info e converte para a tabela asc (retorna uma str)
	printf("Dada e hora local %s\n", asctime(info));



	inicio_t = clock();
	printf("Realizando um loop grande, inicio t = %ld\n", inicio_t);

	for(int i = 0; i < 10000000; i++){}

	fim_t = clock();
	printf("Fim o programa, fim_t = %ld\n", fim_t);

	total_t = ((double)fim_t - (double)inicio_t)/ CLOCKS_PER_SEC;
	printf("Clocks por segundo: %ld\n", CLOCKS_PER_SEC);
	printf("Tempo total usado pela CPU: %ld\n", total_t);
	return 0;
}
