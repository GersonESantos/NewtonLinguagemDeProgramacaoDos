#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct REGISTRO {
    int numero;
    char letra;
    float real;
};

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    struct REGISTRO variavel;
    variavel.numero = 5;
    variavel.letra = 'A';
    variavel.real = 5.3;

    printf("\nnumero = %i", variavel.numero);
    printf("\nletra = %c", variavel.letra);
    printf("\nreal = %f\n", variavel.real);

    return 0;
}
