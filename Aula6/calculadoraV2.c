#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma, subtracao, mult;
    float div;
    
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
    //Multiplicacao
    mult = num1 * num2;
    //Divisao
    if (num2 != 0)
    {
        div = num1 / num2;
        printf("A divisão entre %d e %d é igual a %f\n", num1, num2, div);
    }
    else
        puts("ERRO: denominador não pode ser igual a zero");
    printf("A multiplicacão entre %d e %d é igual a %d\n", num1, num2, mult);
    
    return (0);
}