#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");
    char *ptr;
    ptr = (char*)malloc(sizeof(char));
    *ptr = 'A'; 
    printf("Dado armazenado no endereco alocado: %c\n", *ptr); 
    free(ptr); 
    return 0;
}
