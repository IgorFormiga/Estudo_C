// Aula sobre variáveis
#include <stdio.h>
//stdio.h é uma biblioteca da linguagem c para se trabalhar com entradas e saidas
// padrão, ou seja, a entrada padrão(teclado) e principal saida(monitor)

// Variáveis são elementos que possuem um tipo de dado, nome e valor
int main(){ // A chave delimita um bloco de código
    //Declarando variáveis
    int idade; // inteiro
    //Declarando variáveis e inicializando variáveis
    //int idade = 0;
    printf("Qual e sua idade? \n"); //o ponto e virgula finaliza um comando
    fflush(stdout);
    //Recebendo dados (scanf recebe dados da entrada padrão)
    scanf("%d", &idade);

    printf("A sua idade é %d\n", idade);
    // "%d": para especificar o tipo de váriavel dentro de uma funfção %<tipo>
    // d indica o inteiro
    //&idade: é a variavel na qual o valor informado usuario vai ser armazenado
    return 0;
}
