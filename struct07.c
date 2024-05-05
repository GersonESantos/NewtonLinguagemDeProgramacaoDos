#include <stdio.h>
#include <locale.h>

struct NOTAS {
    char nome[50];
    char disciplina[50];
    float nota1, nota2, nota3, nota4, nota5;
    float mediaFinal;
};

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    struct NOTAS notasAluno;

    printf("Digite o nome do aluno: ");
    scanf("%s", notasAluno.nome);

    printf("Digite a disciplina: ");
    scanf("%s", notasAluno.disciplina);

    printf("Digite as cinco notas do aluno: ");
    scanf("%f %f %f %f %f", &notasAluno.nota1, &notasAluno.nota2, &notasAluno.nota3, &notasAluno.nota4, &notasAluno.nota5);

    notasAluno.mediaFinal = (notasAluno.nota1 + notasAluno.nota2 + notasAluno.nota3 + notasAluno.nota4 + notasAluno.nota5) / 5;

    if (notasAluno.mediaFinal >= 6) {
        printf("\nO aluno %s foi aprovado na disciplina de %s com a média %.2f", notasAluno.nome, notasAluno.disciplina, notasAluno.mediaFinal);
    } else {
        printf("\nO aluno %s foi reprovado na disciplina de %s com a média %.2f", notasAluno.nome, notasAluno.disciplina, notasAluno.mediaFinal);
    }

    return 0;
}
