#include <stdio.h>

int main()
{
    int idade;

    printf("informe a sua idade: ");
    scanf("%d", &idade);

    //if...else
    if (idade > 17)
        puts("Já é maior de idade");
    else
        puts("Ainda é menor de idade");
    
    return (0);
}