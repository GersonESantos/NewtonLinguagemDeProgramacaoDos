#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct x {
    int a;
    int b;
    int c;
};

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");

    struct x estrutura;
    int *y = malloc(sizeof(estrutura));

    if (y == NULL) {
        printf("Falha na alocação de memória!\n");
        return 1;
    }

    printf("%li\n", sizeof(estrutura)); 

    
    
    free(y);

    return 0;
}
