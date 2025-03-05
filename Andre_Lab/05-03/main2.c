#include <stdio.h>

struct Aluno{ 
  char nome[50];
  int idade;
  float nota;
};

void imprimir(struct Aluno aluno){
  printf("\nAluno: %s\nIdade: %d\nNota: %.2f\n", aluno.nome, aluno.idade, aluno.nota);
}

//acessar informação por meio de um ponteiro

void alterarNota(struct Aluno *aluno, float novaNota){
  aluno->nota = novaNota;
}

 int main(){
  struct Aluno aluno1 = {"Vitor", 19, 6};
  imprimir(aluno1);

  printf("\nNota antes:%.2f", aluno1.nota);
  alterarNota(&aluno1, 9);
  printf("\nNota depois:%.2f", aluno1.nota);


  return 0;
 }