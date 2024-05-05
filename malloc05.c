#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");
    char *num;
    num = malloc(1); // 1 byte alocado
    *num = 'H'; 
    printf("Resultado: %c\n", *num); 
    free(num); 
    return 0;
}

