#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int *pi;
    pi = (int *) malloc(sizeof(int));

    if (pi == NULL) {
        printf("Falha na alocação de memória!\n");
        return 1;
    }

    printf("\nDigite um número: ");
    scanf("%d", pi);
    printf("Você digitou o número: %d\n", *pi);

    free(pi);

     printf("\nInformacao alocada: %d\n", &pi);

    system("pause");
    return 0;
}
