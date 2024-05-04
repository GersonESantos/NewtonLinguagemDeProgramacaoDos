#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct x {
    int a;
    int b;
    int c;
};

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");

    struct x estrutura;
    int *y = malloc(sizeof(estrutura));

    if (y == NULL) {
        printf("Falha na alocação de memória!\n");
        return 1;
    }

    printf("%zu\n", sizeof(estrutura)); // Corrigi a formatação e usei %zu para o tipo size_t.

    free(y);

    return 0;
}
