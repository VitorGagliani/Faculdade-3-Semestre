#include <stdio.h>

int main(){
  int a, b, aux;
  scanf("%d", &a);
  scanf("%d", &b);

  void trocarValor(int a, int b){

    aux = a;
    a = b;
    b = aux;
  }

  return 0;
}