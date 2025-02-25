#include <stdio.h>

int main()
{
    int week;

    printf("Entre com uma valor de 1 a 7: ");
    scanf("%d", &week);

    switch (week)
    {
        case 1:
            puts("Domingo");
            break;
        case 2:
            puts("Segunda-feira");
            break;
        case 3:
            puts("Terca-feira");
            break;
        case 4:
            puts("Quarta-feira");
            break;
        case 5:
           puts("Quinta-feira");
            break;
        case 6:
            puts("Sexta-feira");
            break;
        case 7:
            puts("Sabado");
            break;
        default:
            puts("Valor inserido é invalido");
    }
    return (0);
}