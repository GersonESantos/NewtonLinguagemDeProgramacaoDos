#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    int *pt1, i;
    setlocale(LC_ALL, "Portuguese");

    pt1 = (int*)malloc(sizeof(int) * 5);

    printf("----malloc(sizeof(int)-----alocacao din�mica de mem�ria\n");

    for (i = 0; i < 5; i++) { 
        printf("Digite o %d� valor inteiro: ", i + 1);
        scanf("%d", &pt1[i]);
    }

    for (i = 0; i < 5; i++) { 
        printf("%d� valor = %d\n", i + 1, pt1[i]);
    }

    free(pt1);

    return 0;
}
