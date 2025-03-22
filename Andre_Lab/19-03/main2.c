#include <stdio.h>

int main(){

  FILE *arquivo;
  FILE *arquivo2;

  int num, i;

  arquivo = fopen("arquivo.txt", "r");
  arquivo2 = fopen("arquivo2.txt" , "w");


  if(arquivo == NULL){
    printf("Erro ao abrir arquivo");
    return 1;
  }

  for(i = 0; i <=5; i++){
    fprintf(arquivo, "%d\n", i);
  }


  //ler o arquivo dnv

  
  if(arquivo2 == NULL)
{
  printf("Erro ao abrir o arquivo");
  return 1;
}


printf("Lista de registro lidos(arquivo)\n");

while(fscanf(arquivo, "%d", &num) != EOF){
  fprintf(arquivo2, "%d\n", num);
}
  fclose(arquivo2);
  fclose(arquivo);

  return 0;
}