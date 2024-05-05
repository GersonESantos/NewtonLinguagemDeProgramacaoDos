#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tamanhoVetor 50

int main() {
    // Fun√ß√£o respons√°vel por mostrar corretamente caracteres
    // como acentos, cedilha entre outros.
    setlocale(LC_ALL, "Portuguese_Brazil");

    int cont, i;
    int idades[tamanhoVetor];

    // Preenchimento do vetor
    for (i = 0; i < tamanhoVetor; i++) {
        printf("Digite a %d™ idade: ", i + 1);
        scanf("%d", &idades[i]);
    }

    // Contagem das pessoas que podem votar (idade >=16)
    cont = 0;
    for (i = 0; i < tamanhoVetor; i++) {
        if (idades[i] >= 16) {
            cont++;
        }
    }

    // Impress„o do numero de pessoas que podem votar
    printf("%d pessoas desse grupo podem votar!\n", cont);

    return 0;
}
