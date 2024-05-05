#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> // Inclu� a biblioteca necess�ria para o tipo de dado bool

int main() {
    int i, inteiro;
    float real;
    char caracter;
    bool booleano; // Adicionei a declara��o da vari�vel booleano e o tipo de dado bool
    
    int *ptinteiro = &inteiro;
    float *ptreal = &real;
    char *ptchar = &caracter;
    bool *ptbool = &booleano;

    for (i = 0; i < 5; i++) { 
        printf("|Inteiro - %p |Real - %p |Char - %p |Boolean - %p|\n", (void*)ptinteiro, (void*)ptreal, (void*)ptchar, (void*)ptbool);
        ptinteiro++;
        ptreal++;
        ptchar++;
        ptbool++;
    }

    return 0;
}
