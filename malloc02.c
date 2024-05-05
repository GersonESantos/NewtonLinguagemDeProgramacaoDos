#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    int i, j;
    char nomes[3][2][51];
    setlocale(LC_ALL, "Portuguese");
    printf("Preenchimento da matriz  strings\n");
    // Preenchimento da matriz de Strings
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("nome [%d][%d]: ", i, j);
            fgets(nomes[i][j], 51, stdin);
            
            nomes[i][j][strlen(nomes[i][j]) - 1] = '\0';
        }
    }

    printf("\n");

    // Impressão da matrdeiz  strings

    printf("Impressão da matrdeiz  strings");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 2; j++) {
            printf("nome [%d][%d]= %s ", i, j, nomes[i][j]);
        }
    }

    return 0;
}
