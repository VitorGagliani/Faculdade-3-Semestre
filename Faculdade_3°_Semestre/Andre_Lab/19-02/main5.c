#include <stdio.h>

#define linhas 3
#define coluna 3

int main(void) {
    int matriz[linhas][coluna] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
    };

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("teste 2: from back to front  \n");

    for (int i = linhas - 1; i >= 0; i--) {
       for (int j = coluna - 1; j >= 0; j--){
           printf("%d ", matriz[i][j]);
       }
        printf("\n");
    }

    return 0;
}