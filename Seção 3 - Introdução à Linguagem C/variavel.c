// Aula sobre variaveis
#include <stdio.h>
//stdio.h � uma biblioteca da linguagem c para se trabalhar com entradas e saidas
// padr�o, ou seja, a entrada padr�o(teclado) e principal saida(monitor)

// Vari�veis s�o elementos que possuem um tipo de dado, nome e valor
int main(){ // A chave delimita um bloco de c�digo
    //Declarando vari�veis
    int idade; // inteiro
    //Declarando vari�veis e inicializando vari�veis
    //int idade = 0;
    printf("Qual e sua idade? \n"); //o ponto e virgula finaliza um comando
    fflush(stdout);
    //Recebendo dados (scanf recebe dados da entrada padr�o)
    scanf("%d", &idade);

    printf("A sua idade � %d\n", idade);
    // "%d": para especificar o tipo de v�riavel dentro de uma funf��o %<tipo>
    // d indica o inteiro
    //&idade: � a variavel na qual o valor informado usuario vai ser armazenado
    return 0;
}
