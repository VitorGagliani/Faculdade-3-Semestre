#include <stdio.h>

void soma(int a, int b){
  int soma = a+b;
  *a = 0;
  *b = 0;
  //essas variaveis só existem dentro dessa função
}

int main(){
  int a, b;
  scanf("%d", &a);
  scanf("%d", &b);
  soma(&b, &a);
  return 0;
}