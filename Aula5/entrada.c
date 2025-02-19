#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    char nome[20];
    char caracter;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    printf("Informe O seu nome: ");
    gets(nome);

    puts("Comer te deixa feliz?");
    printf("Digite v - verdadeiro ou f - falso: ");
    getchar(caracter);

    printf("Valor capturado usando o comando scanf: %d", idade);
    printf("Valor capturado usando o comando gets: %s", nome);
    printf("Valor capturado usando o comando getchar: %c", caracter);
    
    return 0;
}