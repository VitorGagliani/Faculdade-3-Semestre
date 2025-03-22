#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINHA 256

int main() {
    FILE *arquivo = fopen("telefones_idades_emails.txt", "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    char linha[MAX_LINHA];
    char telefone[50], idade[10], email[100];

    while (fgets(linha, sizeof(linha), arquivo)) {
        // Usa strtok para separar os valores com base no delimitador "|"
        char *token = strtok(linha, "|");
        if (token != NULL) {
            strcpy(telefone, token);  // Primeiro campo: telefone
        }

        token = strtok(NULL, "|");
        if (token != NULL) {
            strcpy(idade, token);  // Segundo campo: idade
        }

        token = strtok(NULL, "|");
        if (token != NULL) {
            strcpy(email, token);  // Terceiro campo: e-mail
        }

        // Exibe os dados filtrados corretamente
        printf("Telefone: %s\n", telefone);
        printf("Idade: %s\n", idade);
        printf("Email: %s\n", email);
        printf("--------------------\n");
    }

    fclose(arquivo);
    return 0;
}
