#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int *array; // ponteiro para o array de inteiros
    int i;

    // Aloca memória para um array de 5 inteiros
    array = (int*)malloc(sizeof(int) * 5);

    // Verifica se a alocação de memória foi bem-sucedida
    if (array == NULL) {
        printf("Erro: Memória não pôde ser alocada.\n");
        return 1; // Saída do programa com código de erro
    }

    // Preenche o array com alguns valores
    for (i = 0; i < 5; i++) {
        array[i] = i * 10;
    }
    printf("\n");
    // Imprime os valores do array
    printf("Valores do array:\n");
    for (i = 0; i < 5; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    // Libera a memória alocada
    free(array);

    return 0;
}
