#include <stdio.h>

void troca_valores(int *ptrx, int *ptry){
  int auxiliar;
  
  auxiliar = *prtx;
  *ptrx = *ptry;
  *ptry = *ptrx;

  return 0;
}

int main(){
  int x, y;
  printf("Digite um valor: ");
  scanf("%d", &x);

  printf("Digite um valor: ");
  scanf("%d", &y);

  printf("valor de x eh: %d \n valor de y eh: %d", x, y);


  troca_valores(&x, &y);

  printf("valor de x eh: %d \n valor de y eh: %d", x, y);

  

}