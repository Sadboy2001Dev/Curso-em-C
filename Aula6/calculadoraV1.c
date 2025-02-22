#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma, subtracao;
    
    puts("Digite valores do tipo inteiro");
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);
    // Soma de dois inteiros
    soma = num1 + num2;
    //Subtracao de dois inteiros
    subtracao = num1 - num2;
    printf("A soma entre %d e %d é igual a %d\n", num1, num2, soma);
    printf("A subtracão entre %d e %d é igual a %d\n", num1, num2, subtracao);
    
    return (0);
}