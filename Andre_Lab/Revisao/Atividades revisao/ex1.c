#include <stdio.h>
#include <math.h>

int soma, op, media, resul, maior, base, l1, l2;
float temp, celc, n1, n2, n3, x1, x2, delta;
int nmrs1[5], vetor[3];

void ex1(){

  for(int i = 0; i < 5; i++){
    printf("Digite um numero para a soma: ");
    scanf("%d", &nmrs1[i]);
    soma+= nmrs1[i];
  }
  printf("A soma dos numeros eh: %d", soma);
}

void ex2(){

  for(int i = 0; i <5; i++){
    printf("Digite um numero: ");
    scanf("%d", &nmrs1[i]);
    soma+= nmrs1[i];
  }
  
  media = soma/5;
  printf("A media eh: %d \n", media);

  int maior = 0;

  for(int i = 0; i < 5; i++){
    if (maior < nmrs1[i]){
    maior = nmrs1[i];
    }
  }

  printf("O maior numero eh: %d \n", maior);

}

void ex3(){
  printf("Digite uma temperatura para converter para fahrenheit: ");
  scanf("%f", &celc);
  temp = (celc * 1.8) + 32;
  printf("%f em fahrenheit eh: %.2f \n",celc, temp);

}

void ex4(){
  for(int i = 10; i >= 0; i--){
    printf("%d\n", i);
  }
}

void ex5(){

  printf("Digite um numero para ver a tabuada: ");
  scanf("%d", &op);

  for(int i = 0; i < 11; i++){
    resul = i * op;
    if(resul % 2 != 0 ){
    printf("%d * %d = %d\n", op, i, resul);

    }
  }

}

void ex6(){

  do{
  printf("Digite um numero de 1 a 7: ");
  scanf("%d", &op);
 
  switch(op){
    case 1:
      printf("Domingo \n");
      break;

      case 2:
      printf("Segunda \n");
      break;

      case 3:
      printf("Terca \n");
      break;

      case 4:
      printf("Quarta \n");
      break;

      case 5:
      printf("Quinta \n");
      break;

      case 6:
      printf("Sexta \n");
      break;

      case 7:
      printf("Sabado \n");
      break;
  }

  }while(op < 8);
}

void ex7(){
  //lembra de criar um vetor de 3 fora da func. e dps cria os if's pra comparar
  for(int i = 0; i < 3; i++){
    printf("Digite um numero: ");
    scanf("%d", &vetor[i]);
  }
  for(int i = 0; i < 3; i++){
    printf("%d\n", vetor[i]);
  }

  int maior = vetor[0];
  for(int i = 0; i < 3; i++){
    if(vetor[i]> maior){
        maior = vetor[i];
        printf("O maior numero eh: %d\n ", maior);
    }
  }
}

void ex8(){
  printf("Tamanho da base: ");
  scanf("%d", &base);

  printf("Tamanho do lado 1: ");
  scanf("%d", &l1);

  printf("Tamanho do lado 2: ");
  scanf("%d", &l2);

  if(l1 == l2 && l2 == base ){
    printf("Triangulo eh equilatero");
  } else if(l1 == l2 || l1 == base || l2 == base){
    printf("Triangulo eh isoceles");
  }else{
    printf("Triangulo eh escaleno");
  }
}

void ex9() {
    printf("Digite o valor de a: ");
    scanf("%f", &n1); 

    printf("Digite o valor de b: ");
    scanf("%f", &n2);

    printf("Digite o valor de c: ");
    scanf("%f", &n3);

    delta = pow(n2, 2) - 4 * n1 * n3;

    if (delta < 0) {
        printf("A equacao nao possui raizes reais.\n");
    } else if (delta == 0) {
        x1 = -n2 / (2 * n1);
        printf("A equacao possui apenas uma raiz: x1 = %.2f\n", x1);
    } else {
        x1 = (-n2 + sqrt(delta)) / (2 * n1);
        x2 = (-n2 - sqrt(delta)) / (2 * n1);
        printf("As raizes da equacao sao: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }
}

int main(){
  int ex;
  
  do{
    printf("Qual exercicio? 1 ate 10: ");
    scanf("%d", &ex);
    switch (ex){
      case 1: 
        ex1();
        break;

      case 2:
        ex2();
        break;

      case 3:
        ex3();
        break;

      case 4:
        ex4();
        break;
      case 5:
        ex5();
        break;
      
      case 6:
        ex6();
        break;

      case 7:
        ex7();
        break;
      
      case 8:
        ex8();
        break;

      case 9:
        ex9();
        break;
    }
      
  }while(ex < 11);

  return 0;
}