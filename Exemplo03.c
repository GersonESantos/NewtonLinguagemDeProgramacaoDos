#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    int i;
    char nomes[10][51];
    setlocale(LC_ALL, "Portuguese");

    // Preenchimento do vetor de Strings
    for (i = 0; i < 10; i++) {
        printf("Digite o %dº nome completo: ", i + 1);
        fgets(nomes[i], 51, stdin);
        // Removendo o caractere de nova linha do final da string
        nomes[i][strlen(nomes[i]) - 1] = '\0';
    }

    printf("\n");

    // ImpressÃ£o do vetor inteiro
    for (i = 0; i < 10; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}
