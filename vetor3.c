#include <stdio.h>

int main() {
  int matriz[3][3], l, c;
  // matriz de 3 linhas e 3 colunas


  printf("\nDigite valor para os elementos da matriz\n\n");

  for (l = 0; l < 3; l++)
    for (c = 0; c < 3; c++) {
      printf("\nElemento[%d][%d] = ", l, c);
      scanf("%i", &matriz[l][c]);
    }

  printf("\n\n******************* Saida de Dados ********************* \n\n");

  for (l = 0; l < 3; l++)
    for (c = 0; c < 3; c++) {
      printf("\nElement[%d][%d] = %d\n", l, c, matriz[l][c]);
    }
  
  return (0);
}