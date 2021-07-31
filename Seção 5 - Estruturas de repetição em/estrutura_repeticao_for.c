#include <stdio.h>
/*
Estrutura de repitição: for, while, do..while
						para, enquanto, faça...enquanto
for: Quando se sabe o número total de repetições (loops)
while: Quando não se sabe o número máximo de loops, só que antes dSo primeiro loop é feito uma checagem de uma condição
do...while: Quando não se sabe o número máximo de loops, só que a checagem é realizada após o primeiro loop
 */

int main(){
	// É necessário iniciar a variável com algum valor quando se realiza alguma operação sem antes atribui-la
	int numero, soma = 0;

	//para o int i iniciando em 0; enquanto i<5; incrementa o i em 1
	// Inicialização, criterio de parada, forma de incremento
	// i++ == i+1
	//i += n == i+n
	for(int i=0; i<5; i++){
		printf("Informe um número: ");
		fflush(stdout);
		scanf("%d", &numero);

		soma = soma + numero;
	}
	printf("A soma é igual a %d", soma);
}
