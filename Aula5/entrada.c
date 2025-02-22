#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    char nome[20];
    char caracter;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    getchar(); //Para consumir o \n deixado pelo scanf no buffer

    printf("Informe O seu nome: ");
    fgets(nome, sizeof(nome), stdin); //em substituicao do gets

    puts("Comer te deixa feliz?");
    printf("Digite v - verdadeiro ou f - falso: ");
    caracter = getchar();

    printf("Valor capturado usando o comando scanf: %d\n", idade);
    printf("Valor capturado usando o comando fgets: %s\n", nome);
    printf("Valor capturado usando o comando getchar: %c", caracter);
    
    return 0;
}