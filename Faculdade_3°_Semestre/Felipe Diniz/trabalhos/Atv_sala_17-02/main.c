#include <stdio.h>

void soma(int a, int b){
  printf("%d + %d = %d\n", a, b, a+b);
  
}

void sub(int a, int b){
  printf("%d - %d = %d\n", a, b, a-b);
}

void div(int a, int b){
  printf("%d / %d = %d\n", a, b, a/b);
  
}

void mult(int a, int b){
  printf("%d * %d = %d\n", a, b, a*b);
  
}

int main(){
  int a,b;
  printf("Digite um numero: ");
  scanf("%d", &a);
  printf("Digite um numero: ");
  scanf("%d", &b);

  soma(a,b);
  sub(a,b);
  mult(a,b);
  div(a,b);
  return 0;
}