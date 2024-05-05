#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct PEDIDOS {
    int formaDePagamento;
    char telefone[15], nome[21], endereco[41];
    float valor, taxaEntrega;
};

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    struct PEDIDOS entrega;

    printf("Digite o código da forma de pagamento:\n1 - Dinheiro, 2 - Cartão:\n");
    scanf("%d", &entrega.formaDePagamento);

    printf("Digite o Nome do Cliente:");
    fflush(stdin);
    gets(entrega.nome);

    printf("Digite o Endereço do Cliente:");
    fflush(stdin);
    gets(entrega.endereco);

    printf("Digite o telefone:");
    fflush(stdin);
    gets(entrega.telefone);

    printf("Digite o valor do pedido:");
    scanf("%f", &entrega.valor);
/*
A seguir, é mostrada a condicional que calcula o frete, caso o valor da compra for maior que R$ 30 e a opção for
igual a 1 ? Dinheiro, o campo taxaEntrega da variável entrega recebe 0, caso contrário, ele recebe 3.5. Feito isso,
são impressos todos os valores da estrutura, exceto o campo com o código de pagamento:
*/
    if (entrega.valor >= 30 && entrega.formaDePagamento == 1) {
        entrega.taxaEntrega = 0;
    } else {
        entrega.taxaEntrega = 3.5;
    }

    printf("\nCliente: %s", entrega.nome);
    printf("\nEndereço: %s", entrega.endereco);
    printf("\nTelefone: %s\n", entrega.telefone);
    printf("\nValor do pedido: %f", entrega.valor);
    printf("\nTaxa de Entrega: %f", entrega.taxaEntrega);

    return 0;
}
