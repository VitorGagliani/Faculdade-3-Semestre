#include <stdio.h>

int main(){
//Escreva um programa que leia uma matriz 3x3 com n° inteiros, em seguida calcule e escreva a soma dos elementos da diagonal principal.

int matriz[3][3];
int soma = 0, i=0, j=0;

for(i = 0; i < 3; i++){
  for(j = 0; j < 3; j++){
    printf("[%d] [%d]", i, j);
    scanf("%d", &matriz[i][j]);
  }
  printf("\n");
}

for(i = 0; i < 3; i++){
  for(j = 0; j < 3; j++){
    printf("[%d] ", matriz[i][j]);
  }
  printf("\n");
}

for(i = 0; i < 3; i++){
  for(j = 0; j < 3; j++){
    if(i == j){
      soma+= matriz[i][j];
    }
  }
}
printf("A soma eh: %d", soma);

  return 0;
}