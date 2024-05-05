#include <stdio.h>

void funcao_descolhecida(int Vet[10])
{
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d ", Vet[i]);
    }
}

int main()
{
    int Matriz[5][10];
    int i;
    for (i = 0; i < 10; i++) {
        Matriz[0][i] = i;
    }
    i = 0;
    funcao_descolhecida(Matriz[i]);
    printf("\n");
    return 0;
}
