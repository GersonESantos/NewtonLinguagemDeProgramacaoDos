#include <stdio.h>
#include <locale.h>

struct ender {
    char rua[40];
    char num[6];
    char bairro[20];
    char cep[8];
};

struct Tfuncionario {
    char mat[8];
    char nome[30];
    struct ender endereco; // Incorporando a estrutura ender dentro da estrutura Tfuncionario
    char cargo[20];
    int numdep;
    float salario;
    char dtadm[8];
};

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");

    struct Tfuncionario func;

    printf("Matricula: ");
    gets(func.mat);
    printf("Nome: ");
    gets(func.nome);
    printf("Rua: ");
    gets(func.endereco.rua); // Acessando o campo rua da estrutura ender dentro de func
    printf("Numero: ");
    gets(func.endereco.num); // Acessando o campo num da estrutura ender dentro de func
    printf("Bairro: ");
    gets(func.endereco.bairro); // Acessando o campo bairro da estrutura ender dentro de func
    printf("CEP: ");
    gets(func.endereco.cep); // Acessando o campo cep da estrutura ender dentro de func
    printf("Cargo: ");
    gets(func.cargo);
    printf("Numero do Depto: ");
    scanf("%d", &func.numdep);
    printf("Salário: ");
    scanf("%f", &func.salario);
    printf("Data de Admissão: ");
    scanf("%s", func.dtadm);

    printf("Matricula: %s\n", func.mat);
    printf("Nome: %s\n", func.nome);
    printf("Rua: %s\n", func.endereco.rua);
    printf("Numero: %s\n", func.endereco.num);
    printf("Bairro: %s\n", func.endereco.bairro);
    printf("CEP: %s\n", func.endereco.cep);
    printf("Cargo: %s\n", func.cargo);
    printf("Numero do Depto: %d\n", func.numdep);
    printf("Salário: %4.2f\n", func.salario);
    printf("Data de Admissão: %s\n", func.dtadm);

    return 0;
}
