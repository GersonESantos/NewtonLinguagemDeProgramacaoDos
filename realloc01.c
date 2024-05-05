/*
Exemplo: para demonstrar o uso da função realloc(), faremos um pequeno programa que armazenará inteiros em
um vetor de 10 elementos e o aumentaremos para 15 elementos:
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int *vetor;
    vetor = malloc(10 * sizeof(int));

    if (vetor == NULL) {
        printf("Falha na alocação de memória!\n");
        return 1;
    }

    for (int n = 0; n < 10; n++)
        vetor[n] = n * n;

    vetor = realloc(vetor, 15 * sizeof(int));

    if (vetor == NULL) {
        printf("Falha na realocação de memória!\n");
        return 1;
    }

    for (int n = 10; n < 15; n++)
        vetor[n] = n;

    printf("\n Exemplo de  função realloc(),");
    for (int n = 0; n < 15; n++)
        printf("\n vetor[%i] = %i", n, vetor[n]);

    free(vetor);

    return 0;
}
