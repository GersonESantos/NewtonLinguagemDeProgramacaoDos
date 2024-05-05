#include <stdio.h>
#include <locale.h>
#include <string.h> // Adicionada a inclusão da biblioteca string.h para utilizar a função strcpy

struct funcionario {
    char nome[30];
    int idade;
    char sexo;
    float altura;
};

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    struct funcionario f;
    strcpy(f.nome, "Joao"); // Utiliza a função strcpy para copiar a string "Joao" para f.nome
    f.idade = 38;
    f.sexo = 'M';
    f.altura = 1.76;

    printf("Nome: %s\n", f.nome);
    printf("Idade: %d\n", f.idade);
    printf("Sexo: %c\n", f.sexo);
    printf("Altura: %4.2f\n", f.altura);

    return 0;
}
