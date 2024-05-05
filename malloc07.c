/*
Aloque um vetor para 10 inteiros de forma dinâmica e inicialize os vetores com algum valor e
imprima na tela:
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int *v, n = 10;
    v = (int *)malloc(sizeof(int) * n);

    if (v == NULL) {
        printf("Falha na alocação de memória!\n");
        return 1;
    }

    int i;
    for (i = 0; i < n; i++)
        v[i] = i * i;

    for (i = 0; i < n; i++)
        printf("v[%d] = %d\n", i, v[i]);

    free(v);

    return 0;
}
