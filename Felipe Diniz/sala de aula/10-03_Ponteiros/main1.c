#include <stdio.h>

void Zera(float *a)//define que o parametro
{
  *a = 0; //utiliza o operador de de referencia de outra variavel
}

void main()
{
  float f;

  f= 20.7;
  Zera(&f); //passa o end da variavel
  printf("%f", f); //valor impresso após alterar o valor
}