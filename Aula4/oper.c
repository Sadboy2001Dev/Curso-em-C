#include <stdio.h>
#include <stdlib.h>

    /*
        Nesta aula vamos dar inicio as operacoes aritmeticas
        Aprenderemos como fazer algumas aritmeticas.

        Entao vamos por a mao na massa.
    
        */
int main()
{
    int n1, n2, soma, subtr, mult; //declaracao multipla
    float div;

    n1 = 12;
    n2 = 9;

    soma = n1 + n2;
    subtr = n1 - n2;

    mult = n1 * n2;

    div = n1 / n2;
    printf("%d + %d = %d\n",n1, n2, soma);
    printf("%d - %d = %d\n", n1, n2, subtr);
    printf("%d * %d = %d\n", n1, n2, mult);
    printf("%d : %d = %f", n1, n2, div);
    return (0);
}