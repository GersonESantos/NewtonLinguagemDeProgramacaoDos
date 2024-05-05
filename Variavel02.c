/*
Excreva um programa que converta em valor inteiro o tamanho de uma variável e imprima esse
valor em bytes na tela com computador
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int pt;
    pt = sizeof(int);
    printf("\nTamanho de um inteiro: %i bytes.\n", pt);
    return 0;
}
