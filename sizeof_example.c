#include <stdio.h>

int main() {
    // Tipos de dados
    char charVar;
    int intVar;
    float floatVar;
    double doubleVar;
    long longVar;

    // Tamanho dos tipos de dados
    printf("Tamanho de char: %zu bytes\n", sizeof(charVar));
    printf("Tamanho de int: %zu bytes\n", sizeof(intVar));
    printf("Tamanho de float: %zu bytes\n", sizeof(floatVar));
    printf("Tamanho de double: %zu bytes\n", sizeof(doubleVar));
    printf("Tamanho de long: %zu bytes\n", sizeof(longVar));

    // Tamanho de ponteiros
    printf("Tamanho de ponteiro para char: %zu bytes\n", sizeof(char*));
    printf("Tamanho de ponteiro para int: %zu bytes\n", sizeof(int*));
    printf("Tamanho de ponteiro para float: %zu bytes\n", sizeof(float*));
    printf("Tamanho de ponteiro para double: %zu bytes\n", sizeof(double*));
    printf("Tamanho de ponteiro para long: %zu bytes\n", sizeof(long*));

    return 0;
}
