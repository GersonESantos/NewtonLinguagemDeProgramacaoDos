#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int j, i;
    float matriz[3][3];

    // Preenchimento da matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("MATRIZ[%i][%i]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    // Impressão da matriz inteira
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf("MATRIZ[%i][%i] = %f ", i, j, matriz[i][j]);
        }
    }

    return 0;
}
