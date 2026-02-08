#include <stdio.h>
#include "cs50.h" // Aspas indicam que o arquivo está na mesma pasta

int main(void) {
    string nome = get_string("Qual seu nome? ");
    printf("Olá, %s\n", nome);
}