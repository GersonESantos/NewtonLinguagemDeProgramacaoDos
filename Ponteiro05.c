#include <stdio.h>
#include <stdlib.h>

int main() {
    int *pt, valor1, valor2;
    valor1 = 15;
    valor2 = 0;
    printf(" valor1 = %i valor2 = %i \n\n\n", valor1, valor2);
    pt = &valor1;
    
    valor2 = *pt;
    
    *pt = 12;
    
    valor2 = *pt;
    printf("valor1 = %i valor2 =  %i \n\n\n", valor1, valor2);
    system("PAUSE");
    return 0;
}
