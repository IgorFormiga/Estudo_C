#include <stdio.h>
/*
Estrutura de repiti��o: for, while, do..while
						para, enquanto, fa�a...enquanto
for: Quando se sabe o n�mero total de repeti��es (loops)
while: Quando n�o se sabe o n�mero m�ximo de loops, s� que antes dSo primeiro loop � feito uma checagem de uma condi��o
do...while: Quando n�o se sabe o n�mero m�ximo de loops, s� que a checagem � realizada ap�s o primeiro loop
 */

int main(){
	// � necess�rio iniciar a vari�vel com algum valor quando se realiza alguma opera��o sem antes atribui-la
	int numero, soma = 0;

	//para o int i iniciando em 0; enquanto i<5; incrementa o i em 1
	// Inicializa��o, criterio de parada, forma de incremento
	// i++ == i+1
	//i += n == i+n
	for(int i=0; i<5; i++){
		printf("Informe um n�mero: ");
		fflush(stdout);
		scanf("%d", &numero);

		soma = soma + numero;
	}
	printf("A soma � igual a %d", soma);
}
