//Passagem de oarâmetros por referencia
//Uma variavel int oculpa 4bytes na ram
 #include <stdio.h>

  void teste1(int *xp, int *yq){
    //poe o * para alterar o valor no endereço da variavel
    *xp = *xp + 1;
    *yq = *yq + 1;
  }

 void main(){
  int a = 1, b = 2, *p;
  p = &a;
  printf("valor de a = %d, endereco de &a = %d\n", a, &a);
  printf("valor de p = %d, endereco de p = %d\n",b, &b);


  printf("\n-----\n");


  teste1(&a,&b);
  printf("valor de a = %d, endereco de &a = %d\n", a, &a);
  printf("valor de b = %d, endereco de &b = %d\n",b, &b);
 }