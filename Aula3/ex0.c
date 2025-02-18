#include <stdio.h>

int main(void)
{
    int ano; // variavel de tipo inteiro que possui o nome de Ano
    int idade; // variavel de tipo inteiro que possui o nome de Idade

    ano = 2025; // foi atribuido um valor a variavel Ano
    idade = 23; // foi atribuido um valor a variavel Idade

    /*
        Um inteiro (int) é um tipo de dados que armazena numeros sem 
        ponto flutuante(vírgulas)

        Os formatadores para o tipo inteiro é 
         %i            %d   ---> são os dois formatadores do inteiro. 
    */

    printf("%d", ano);
    printf("\n"); // Escopo
    printf("%i", idade);
    return (0);
}