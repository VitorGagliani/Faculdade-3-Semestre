#include <stdio.h>
#include <math.h>

void calcular(float *x1, float *x2, int *erro, float a, float b, float c) {
    float delta = b * b - 4 * a * c;

    if (delta >= 0) {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        *erro = 0;
    } else {
        *erro = 1;
    }
}

void imprimir(float matriz[3][6], int linhas) {
  printf("Coluna 2 == 1:\n");
  for (int i = 0; i < linhas; i++) {
      if ((int)matriz[i][2] == 1) { // Se a coluna 2 (erro) for 1
          printf("Coluna %d: x1 = %.2f, x2 = %.2f\n", i, matriz[i][0], matriz[i][1]);
      }
  }
}

int main() {
    float x1, x2, a, b, c;
    int erro;

    float matriz[3][6] = {
        {0, 0, 0, 1, 20, 3},
        {0, 0, 0, 3, 4, 20},
        {0, 0, 0, 2, -4, 31}
    };

    for (int i = 0; i < 3; i++) {
        a = matriz[i][3];
        b = matriz[i][4];
        c = matriz[i][5];

        calcular(&x1, &x2, &erro, a, b, c);

        matriz[i][0] = x1;
        matriz[i][1] = x2;
        matriz[i][2] = erro;
    }

  
    for (int i = 0; i < 3; i++) {
        printf("Coluna: %d: x1 = %.2f, x2 = %.2f, erro = %d, a = %.2f, b = %.2f, c = %.2f\n",
               i, matriz[i][0], matriz[i][1], (int)matriz[i][2], matriz[i][3], matriz[i][4], matriz[i][5]);
    }

    imprimir(matriz, 3);

    return 0;
}
