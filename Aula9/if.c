#include <stdio.h>

int main()
{
    int idade;

    printf("Informe a sua idade: ");
    scanf("%d", &idade);
    // if
    if (idade > 17)
        puts("Já é um adulto");
    return (0);
}