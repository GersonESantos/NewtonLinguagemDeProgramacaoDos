#include <stdio.h>
#include <string.h>

int main() {
    char v[100];
    printf("Digite a palavra: ");

    gets(v);  
        int tam = strlen(v);
        printf("Palavra invertida e:");
        for (int i = tam - 1; i >= 0; i--) {
            
        
            printf("%c", v[i]);
        }   
    }
    
