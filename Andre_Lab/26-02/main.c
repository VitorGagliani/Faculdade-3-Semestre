#include <stdio.h>
#include <string.h>

 void executarOpcao(char *opcao){
  
  if(strcmp(opcao, "iniciar")==0){
    printf("Iniciando o Sisitema");
  }else if (strcmp(opcao, "parar")== 0){
    printf("Parando o sistema");
  }else if(strcmp(opcao, "reiniciar")== 0){
    printf("Reiniciando o sistema");
    }else{
    printf("Op invalida");
    }

 }

int main(){
  char opcao[20];
  printf("Digite a opcao desejada: iniciar, reiniciar, parar: ");
  scanf("%s", opcao);
  executarOpcao(opcao);
  return 0;
}