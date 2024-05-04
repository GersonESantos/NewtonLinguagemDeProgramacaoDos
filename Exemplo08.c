#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    int count = 10;
    int *pt = NULL;
    pt = &count;
    setlocale(LC_ALL, "Portuguese");

    // Ao imprimir os valores nesse momento percebe-se que o
    // valor contido na posição apontada pelo ponteiro e o
    // valor da variável são os mesmos.
    printf("O valor contido na variável count é %i\n", count);
    // imprime o endereço contido no ponteiro (conteúdo do
    // ponteiro)
    printf("O endereço contido no ponteiro é %p\n", (void*)pt);
    // imprime o conteúdo do endereço de memória apontado por
    // pt
    printf("O valor contido no endereço armazenado no ponteiro é %i\n", *pt);
    // quando é utilizado o operador indireto do ponteiro ele
    // acessa, a variável para a qual aponta de forma indireta,
    // quando recebe, o valor 30 esse valor é alterado na variável count para onde ele aponta.
    *pt = 30;
    printf("O valor contido na variável count agora é %i\n", count);
    printf("O valor contido no endereço armazenado no ponteiro agora é %i\n", *pt);
    // Ao imprimir os valores depois da atribuição com o
    // operador indireto, nos dois casos será impresso 30.

    return 0;
}
