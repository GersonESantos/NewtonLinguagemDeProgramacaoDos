#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Adicionado para usar a função strcpy
#include <locale.h>

int main() {
    char nome[51], endereco[101];

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o Nome: ");
    fgets(nome, sizeof(nome), stdin); 
    nome[strcspn(nome, "\n")] = 0; 

    printf("Digite o Endereço Completo: ");
    fgets(endereco, sizeof(endereco), stdin);
    endereco[strcspn(endereco, "\n")] = 0;

    printf("\nNome: %s\nEndereço: %s\n", nome, endereco);

    return 0;
}
