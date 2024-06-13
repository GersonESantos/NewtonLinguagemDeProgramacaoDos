#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "C programming";
    char str2[20];

    // Copiando str1 para str2
    strcpy(str2, str1);

    printf("str2: %s\n", str2);  // Saída: C programming

    return 0;
}
