#include <stdio.h>
#include <stdlib.h>

int main() {
    int *pt1 = NULL, *pt2 = NULL, valor1, valor2, resultado;
    valor1 = 10;
    valor2 = 15;
    pt1 = &valor1;
    pt2 = &valor2;
    resultado = *pt1 + *pt2;
    printf("%i \n", resultado);
    return 0;
}
