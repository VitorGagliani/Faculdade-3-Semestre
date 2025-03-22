#include <stdio.h>


int main(){
  FILE *arquivo;
  arquivo = fopen("telefones_idades_emails.txt", "w");

  if (arquivo == NULL){
    printf("Erro ao abrir o arquivo");
    return 1;
  }

  fprintf(arquivo, "Aprendendo a gravar linhas em um arquivo\n"); //Para escrever dentro do arquivo

  fclose(arquivo); //Para encerrar o processo do arquivo e n dar aquele erro para excluir e falar que ele ainda esrá sendo usado por outro processo

  printf("Arquivo gerado com sucesso"); //mostrar no console que o arquivo foi gerado
}
