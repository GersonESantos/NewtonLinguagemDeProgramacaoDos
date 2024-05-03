#include <stdio.h>
int main() {
    int num = 0;
    int cubo = 0 ;
    printf("Cubo de um Numero\n\n");
    printf("Digite um Numero :");
    scanf("%d", &num);
    cubo = num*num*num;
    printf("\n Cubo de %d = %d\n" ,num , cubo);
    return 0;
}