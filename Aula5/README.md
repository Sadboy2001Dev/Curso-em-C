Nesta aula falaremos sobre entrada de dados e saida de dados.

Onde os dados serão fornecidos pelo usuario apartir de um comando de entrada de dados.

Incluido a biblioteca <stdio.h> para entrada e saida de dados, estaremos apto para usar o comando SCANF (comando inputo -> entrada de dados) e  o comando PRINTF já visto anteriormente, para a saida de dados, ainda há mais comandos com o mesmo proposito que serão abordados aqui.

**Comandos de entrada de dados**


# scanf("<%formatador>", &<nome-da-variavel>);
        Usado para ler qualquer tipo de dados

# gets(nome-da-variavel);
        Usado so e somente para leitura de string


# getchar(nome-da-variavel);
        Usado so e somente para leitura de caratere

# fgets(<nome-da-variavel>, <tamanho-da-variavel>, stdin);
        Usado apenas pra captura de string, e é mais eficiente que o gets


**Comandos de saida de dados**


# printf("mensagem <%formatador>", <nome-da-variavel>);
        Muito usado para a mostrar a saida de dados

# puts("mensagem");
        Usado somente ilustar strings e sem fomatadores

# putchar ('caractere');
        Usado para a mostrar a caractere apenas.