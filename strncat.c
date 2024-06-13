#include <stdio.h>
#include <string.h>

int main() {
    char dest[50] = "Hello, ";
    const char src[] = "world!";
    size_t n = 5; // Número de caracteres a serem concatenados

    printf("Antes da execução da função strncat(), dest: %s\n", dest);
    strncat(dest, src, n);
    printf("Após a execução da função strncat(), dest: %s\n", dest);

    return 0;
}
