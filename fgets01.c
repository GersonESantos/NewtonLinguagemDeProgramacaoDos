#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    char *pstring;
    pstring = (char*)malloc(sizeof(char) * 31); // Corrigido para alocar memória para até 30 caracteres

    if (pstring == NULL) {
        printf("Erro: Memória não pôde ser alocada.\n");
        return 1; // Saída do programa com código de erro
    }

    printf("Digite uma palavra de até 20 caracteres: ");
    fgets(pstring, 31, stdin); // Corrigido para fgets para evitar estouro de buffer
    printf("A palavra é %s", pstring);
    free(pstring);

    return 0;
}
