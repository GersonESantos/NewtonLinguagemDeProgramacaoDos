#include <stdio.h>

// Definição da estrutura
struct Pessoa {
    char nome[50];
    char sexo;
    int idade;
};

int main() {
    // Declaração de uma variável do tipo Pessoa
    struct Pessoa pessoa1;

    // Entrada de dados
    printf("Digite o nome: ");
    scanf("%s", pessoa1.nome);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &pessoa1.sexo);

    printf("Digite a idade: ");
    scanf("%d", &pessoa1.idade);

    // Saída de dados
    printf("\nInformacoes da Pessoa:\n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Sexo: %c\n", pessoa1.sexo);
    printf("Idade: %d\n", pessoa1.idade);

    return 0;
}
