#include <sdio.h>

int main(void)
{
    float   altura = 1.70;
    float   largura = 2.50;
    float   media = 5.5;
    // No codigo acima foram declaradas 3 variáveis
    // e atribuídas os seus respectivos valores
    /*
        Float e Double - são tipo dados que armazenam
        numeros com ponto flutuante (com vírgula)

        A diferenca entre float e double é a precisão
        O double possui uma precisão de 8 byts(64bits)
        O float possui uma precisão de 4 bytes(32bits)

        O float permite armazenar até 7 digitos de
        precisão fraccionária e o double permite mais.
    */
    //exemplo de uma declaracão e atribuicão de valores
    //para um double
    double pi = 3.14159265358979323846;
    double euler = 2.71828182845904523536;

    /*
        Os formatadores do tipo float e double são
                            %f
    */

    printf("A minha altura é de %f\n", altura);
    printf("A largura da mesa é de %f\n", largura);
    printf("A média final obtida foi de %f\n", media);
    printf("O valor de PI = %f\n", pi);
    printf("O valor de Euler é %f\n", euler);

    return (0);
}