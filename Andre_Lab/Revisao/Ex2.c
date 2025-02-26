#include <stdio.h>

int main(){

  int n, mult;
  printf("Digite para descobiri a tabuada: ");
  scanf("%d", &n);
  
  for(int i = 0; i < 11; i++){
    mult = n*i;
    printf("%d x %d = %d \n", n, i, mult);

  }

  for(int i = 0; i< 0; i++){
  }

  return 0;
}