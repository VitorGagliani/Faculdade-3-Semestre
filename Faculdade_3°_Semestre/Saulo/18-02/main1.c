
#include <stdio.h>

int teste1(int a, int b){
  a++;
  b++;
  return a+b;
}

void main(){
  int a = 1, b = 2;
  int algumaCoisa = teste1(a, b);
  printf("%d", algumaCoisa);
}