#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    size_t length = strlen(str);

    printf("Comprimento da string: %lu\n", (unsigned long)length);  
    return 0;
}
