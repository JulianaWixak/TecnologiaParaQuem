#include <stdio.h>

int main()
{
    int codigoDoProduto, quantidaDoPedido;
    float valorTotalDoLanche = 0, valorParcialDoLanche;
    char adicionarLanche;

    do
    {
        printf("\nEscolha digitando o codigo abaixo: \ncachorro quente - 100\nbauru simples - 101\nbauru com ovo - 102\nhamburguer - 103\ncheeseburguer - 104\nrefrigerante - 105\n\nInforme o codigo do produto: \n");
        scanf("%d", &codigoDoProduto);

        switch (codigoDoProduto)
        {
        case 100:
            printf("\nInforme a quantidade do produto: \n");
            scanf("%d", &quantidaDoPedido);
            valorParcialDoLanche = quantidaDoPedido * 4.20;
            valorTotalDoLanche = valorTotalDoLanche + valorParcialDoLanche;
            break;
        case 101:
            printf("\nInforme a quantidade do produto: \n");
            scanf("%d", &quantidaDoPedido);
            valorParcialDoLanche = quantidaDoPedido * 5.30;
            valorTotalDoLanche = valorTotalDoLanche + valorParcialDoLanche;
            break;
        case 102:
            printf("\nInforme a quantidade do produto: \n");
            scanf("%d", &quantidaDoPedido);
            valorParcialDoLanche = quantidaDoPedido * 8.50;
            valorTotalDoLanche = valorTotalDoLanche + valorParcialDoLanche;
            break;
        case 103:
            printf("\nInforme a quantidade do produto: \n");
            scanf("%d", &quantidaDoPedido);
            valorParcialDoLanche = quantidaDoPedido * 17.20;
            valorTotalDoLanche = valorTotalDoLanche + valorParcialDoLanche;
            break;
        case 104:
            printf("\nInforme a quantidade do produto: \n");
            scanf("%d", &quantidaDoPedido);
            valorParcialDoLanche = quantidaDoPedido * 15.30;
            valorTotalDoLanche = valorTotalDoLanche + valorParcialDoLanche;
            break;
        case 105:
            printf("\nInforme a quantidade do produto: \n");
            scanf("%d", &quantidaDoPedido);
            valorParcialDoLanche = quantidaDoPedido * 8;
            valorTotalDoLanche = valorTotalDoLanche + valorParcialDoLanche;
            break;
        default:
            printf("\nCodigo invalido!\n");
            break;
        }

        printf("\nO valor total do lanche foi de %.2f", valorTotalDoLanche);

        do
        {
            printf("\n\nDeseja adicionar outro item? (S/N)\n");
            fflush(stdin);
            scanf("%c", &adicionarLanche);
            if (adicionarLanche != 'S' && adicionarLanche != 'N')
            {
                printf("\nOpcao invalida, digite S ou N!\n");
            }
            else if (adicionarLanche == 'N')
            {
                printf("\n\nO valor total eh de R$: %.2f, \n\nobrigado por comprar conosco!\n\n", valorTotalDoLanche);
            }
        } while (adicionarLanche != 'S' && adicionarLanche != 'N');

    } while (adicionarLanche == 'S');

    return 0;
}