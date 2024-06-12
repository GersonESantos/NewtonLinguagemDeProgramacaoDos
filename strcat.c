#include <stdio.h>
#include <string.h>

int main() {
    char nome[100]; // Declare a string para o nome
    char sobrenome[100]; // Declare a string para o sobrenome

    printf("Digite o nome: ");
    scanf("%s", nome); // Lê o nome do usuário

    printf("Digite o sobrenome: ");
    scanf("%s", sobrenome); // Lê o sobrenome do usuário

    strcat(nome, " "); // Adiciona um espaço entre o nome e o sobrenome
    strcat(nome, sobrenome); // Concatena o sobrenome ao nome

    printf("Nome completo: %s\n", nome); // Imprime o nome completo

    return 0;
}
