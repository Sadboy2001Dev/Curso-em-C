#include <stdio.h>

int main(void)
{
    int i; //variavel de nome "i"
    float f; // variavel de nome "f"
    char c; // variavel de nome "c"
    /*
        Variável é um local na memoria onde podemos
        armazenar um valor por um determinado tempo
    */
    i = 10; //atribuimos o valor 10 na variavel "i"
    f = 1.80; // atribuimos o valor 1.80 na variavel "f"
    c = 'm'; // atribuimos o valor 'm' na variavel "c"
    /*
        Carateristicas da variavel
        
        <tipo> <nome-da-variavel> = <valor-da-variavel>
        
        a atribuicao no mesmo momento da declaracao é opcional
    */
    printf("%d", i); // vai imprimir 10
    printf("%f", f); // vai imprimir 1.80
    printf("%c", c); // vai imprimir a letra m
    return (0);
}