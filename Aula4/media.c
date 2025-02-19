#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, media;
    //calcular a media e informar o resultado com duas casas decimais
    nota1 = 5;
    nota2 = 3.5;

    media = (nota1 + nota2) / 2;

    printf("Media Final: %.2f\n", media);

    return 0;
}