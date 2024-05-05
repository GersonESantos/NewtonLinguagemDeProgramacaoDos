#include <stdio.h>
#include <locale.h>

struct ficha {
    int cod;
    char nome[40];
    char tel[10];
};

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    struct ficha aluno, func;

    printf("Código do aluno: ");
    scanf("%d", &aluno.cod);
    printf("Nome do aluno: ");
    scanf("%s", aluno.nome);
    printf("Telefone do aluno: ");
    scanf("%s", aluno.tel);
    printf("Código do funcionário: ");
    scanf("%d", &func.cod);
    printf("Nome do funcionário: ");
    scanf("%s", func.nome); 
    printf("Telefone do funcionário: ");
    scanf("%s", func.tel);

    if (aluno.cod == func.cod)
        printf("Aluno e Funcionários são a mesma pessoa!\n");
    else
        printf("Aluno e Funcionários são pessoas diferentes!\n");

    return 0;
}
