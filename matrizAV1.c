#include <stdio.h>

int main() {
    int linha;
    int coluna;
    int i;
    int somaprod;
    int mat1[3][3] = {{5, 4, 3}, {1, 3, 4}, {5, 7, 9}};
    int mat2[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int mat3[3][3];
    int M1L = 3, M1C = 3, M2L = 3, M2C = 3;

    for (linha = 0; linha < M1L; linha++) {
        for (coluna = 0; coluna < M2C; coluna++) {
            somaprod = 0;
            for (i = 0; i < M1C; i++) // M1C ao invés de M1L
                somaprod += mat1[linha][i] * mat2[i][coluna];
            mat3[linha][coluna] = somaprod;
        }
    }

    for (linha = 0; linha < M1L; linha++) {
        for (coluna = 0; coluna < M2C; coluna++)
            printf("%d ", mat3[linha][coluna]);
        printf("\n");
    }

    return 0;
}
