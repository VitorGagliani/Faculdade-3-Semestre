#include <stdio.h>

int main(){

  FILE *arquivo;
  arquivo = fopen("exemplo.txt", "a"); //usamos o "a" para encrementar algo no arquivo, "w" apaga td e substitui

  if(arquivo == NULL){
    printf("Erro ao abrir o arquivo");

    return 1;
  }

  fprintf(arquivo,"Vitor Vitor\n");
  fclose(arquivo);
  printf("Fim");

  return 0;
}