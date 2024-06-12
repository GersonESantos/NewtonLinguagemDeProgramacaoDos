#include<stdio.h>

int main(void)
{

  int i;
  float notas[6];
  // declarando o vetor

  printf("Bem vindo ao vetor da turma da Newton Paiva\n");

  for(i = 0; i <= 5; i++){
    printf("Digite a nota do aluno %d: ", i);
    scanf("%f", &notas[i]);
    
  }
    
  
  printf("Exibindo os Valores do Vetor \n\n");

  for( i = 0 ; i <= 5; i++)
  {
    printf("notas[%d] = %.1f\n",i, notas[i]);
  }

  return 0;
}