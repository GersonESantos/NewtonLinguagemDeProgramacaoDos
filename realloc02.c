/*
Aloque dinamicamente uma variável de um tamanho e a realoque com tamanho maior. Ex.: aloque
um vetor de cinco elementos e realoque o mesmo com sete elementos
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int *v, i;
    v = (int*)malloc(5 * sizeof(int));

    if (v == NULL) {
        printf("Falha na alocação de memória!\n");
        return 1;
    }

    for (i = 0; i < 5; i++)
        v[i] = i + 1;

    printf("-------Malloc----------------\n");
    for (i = 0; i < 5; i++)
        printf("v[%d] = %d\n", i, v[i]);

    system("pause");

    printf("------Realloc----------------\n");
    v = (int*)realloc(v, 7 * sizeof(int));

    if (v == NULL) {
        printf("Falha na realocação de memória!\n");
        return 1;
    }

    for (i = 5; i < 7; i++)
        v[i] = i + 1;

    for (i = 0; i < 7; i++)
        printf("v[%d] = %d\n", i, v[i]);

    free(v);

    return 0;
}
