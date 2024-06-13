#include <stdio.h>
#include <string.h>

int main() {
    char v[100];
    gets(v);  
        int tam = strlen(v);
        for (int i = tam - 1; i >= 0; i--) {
            printf("%c", v[i]);
        }   
    }
    
