#include<stdio.h>
#include<stdlib.h>

int main() {
    char *p1, *ptnome;
    int *temp, *ptinicio, *ptnota;
    
    // Imprime os endereços antes de atribuir valores
    printf("%p - %p - %p - %p - %p \n\n", (void*)p1, (void*)ptnome, (void*)temp, (void*)ptinicio, (void*)ptnota);
    
    p1 = NULL;
    ptnome = NULL;
    temp = NULL;
    ptinicio = NULL;
    ptnota = NULL;
    
    // Imprime os endereços após atribuir valores NULL
    printf("%p - %p - %p - %p - %p \n\n", (void*)p1, (void*)ptnome, (void*)temp, (void*)ptinicio, (void*)ptnota);

    return 0;
}
