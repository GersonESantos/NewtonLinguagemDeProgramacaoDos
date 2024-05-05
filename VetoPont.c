#include <stdlib.h>
#include <stdio.h>

int main() {
    int *ptvetor, i, vet[10];
    
    for (i = 0; i < 10; i++) {
        vet[i] = i + 1;
    }
    
    ptvetor = vet;
    
    for (i = 0; i < 10; i++) {
        printf("%p - %i\n", ptvetor, *ptvetor);
        ptvetor++; // passa para o próximo endereço
    }
    
    return 0;
}
