#include <stdio.h>

#define TAM 5

int main(){

  int vetor1[TAM], vetor2[TAM], vetor3[TAM];
  int m1, m2, m3, maior;


  printf("Defina os valores do vetor 1\n");
  for(int i = 0; i < TAM; i++){
    scanf("%d", &vetor1[i]);
  }


  printf("Defina os valores do vetor 2\n");
  for(int i = 0; i < TAM; i++){
    scanf("%d", &vetor2[i]);
  }


  printf("Defina os valores do vetor 3\n");
  for(int i = 0; i < TAM; i++){
    scanf("%d", &vetor3[i]);
  }

  maior = 0;

   for(int i = 0; i < TAM; i++){
      if(vetor1[i]>maior){
        maior = vetor1[i];
      }
      if(vetor2[i]>maior){
        maior = vetor2[i];
      }
      if(vetor3[i]>maior){
        maior = vetor3[i];
      }
   }

   printf("O maior numero eh: %d", maior);

  return 0;
}