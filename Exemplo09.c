#include <stdio.h>
#include <stdlib.h>

int main() {
    int *pt, valor1, valor2;
    valor1 = 15;
    // inicializando o ponteiro pt com o endere�o de valor1
    pt = &valor1;
    // valor2 recebe o conteúdo de pt, ou seja 15
    valor2 = *pt;
    // o ponteiro pt modifica o valor da variável valor1,
    // para a qual ele aponta. Ou seja, valor1=12;
    *pt = 12;
    // valor2 recebe o conteudo da variavel para a qual pt aponta, ou seja, valor2=12.
    valor2 = *pt;
    printf("%i %i \n\n\n", valor1, valor2);
    system("PAUSE");
    return 0;
}
