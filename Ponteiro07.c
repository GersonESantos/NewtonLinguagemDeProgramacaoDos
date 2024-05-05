#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    int *pt1, **pt2, valor;
    setlocale(LC_ALL, "Portuguese");

    pt1 = &valor;
    valor = 100;
    pt2 = &pt1;

    printf("Conteúdo do ponteiro pt2: %p\n", (void*)pt2);
    printf("Conteúdo do ponteiro pt1: %p\n", (void*)pt1);
    printf("Conteúdo do ponteiro apontado por (*pt1): %p\n", (void*)*pt1);
    printf("Conteúdo do ponteiro apontado por (*pt2): %p\n", (void*)*pt2);
    printf("Conteúdo do endereço armazenado pelo ponteiro apontado por (**pt2): %i\n", **pt2);

    return 0;
}
