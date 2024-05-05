#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int var = 15;
    int *ptr;
    ptr = &var;
    printf("\nConteudo de Var:              = %d ", var);
    printf("\nEndereco de Var:              = %p ", &var);
    printf("\nConteudo Apontado por ptr     = %d ", *ptr);
    printf("\nEndereco Apontado por ptr     = %p ", ptr);
    printf("\nEndereco de ptr:              = %p ", &ptr);
    *ptr = 73;
    printf("\n-------------------------------------");
    printf("\nConteudo de Var:              = %d ", var);
    printf("\nEndereco de Var:              = %p ", &var);
    printf("\nConteudo Apontado por ptr     = %d ", *ptr);
    printf("\nEndereco Apontado por ptr     = %p ", ptr);
    printf("\nEndereco de ptr:              = %p ", &ptr);
    return (0);
}
//Ponteiros

