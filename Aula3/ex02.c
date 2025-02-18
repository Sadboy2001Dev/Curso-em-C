#include <stdio.h>

int main(void)
{
    char nome[3] = "Gil"; // declaracão de uma string e atribuicao do seu valor 
    char verdadeiro = 'V'; // caractere de valor V
    char falso = 'F'; // caractere de valor F
    
    /*
        char é um tipo de dados que representa carateres
        String é um conjunto de caracteres

        O char deve ser sempre posto entre aspas simples (' e ')
        O string deve ser sempre posto entre aspas suplas (" e ") e se deve informar o seu tamanho
    */
    //  formatadores de char e string
    //  Para string %s e Para char %c
    printf("(%c)\n", verdadeiro);
    printf("%c\n", falso);
    
    int i = 0;
    while(nome[i] != '\0')
    {
        printf("%c", nome[i]);
        if( i == 3)
            printf("\n");
    }
    //Usamos uma pequena estrutura de repeticão para imprimir o nome "Gil"
    
    return (0);
}