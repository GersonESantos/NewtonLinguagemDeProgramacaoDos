#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
char nome[51]; char endereco[101];
printf("\nDigite o Nome:");
gets(nome);
printf("\nEndereco:");
gets(endereco);
printf("\n Nome:%s Endereco: %s" ,nome ,endereco);
return (0);
}
