#include <stdio.h>

void preencherVetor(int vetor[], int tamanho);

int main(void) {
   int vetor[10];

    preencherVetor(vetor, 10);
    for (int i = 0; i < 10; i++) {
        printf("%d\n", vetor[i]);
    }
    return 0;
}
void preencherVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
      vetor[i] =i+1;
  }
}