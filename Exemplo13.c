#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    int *pt1, i;
    setlocale(LC_ALL, "Portuguese");
    // alocação dinâmica de memória
    pt1 = (int*)malloc(sizeof(int) * 5);

    for (i = 0; i < 5; i++) { // Corrigi o loop para executar 5 iterações
        printf("Digite o %dº valor inteiro: ", i + 1);
        scanf("%d", &pt1[i]);
    }

    for (i = 0; i < 5; i++) { // Corrigi o loop para executar 5 iterações
        printf("%dº valor = %d\n", i + 1, pt1[i]);
    }

    free(pt1);

    return 0;
}
