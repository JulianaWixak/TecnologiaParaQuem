#include <stdio.h>

/*
Especificação       |Código   | Preço
Cachorro quente     | 100     |  4,20
Bauru simples       | 101     |  5,30
Bauru com ovo       | 102     |  8,50
Hambúrger           | 103     |  17,20
Cheeseburguer       | 104     |  15,30
Refrigerante        | 105     |  8,00

Escrever um algoritmo que leia o código do item pedido, a quantidade e
calcule o valor a ser pago por aquele lanche. Pergunte ao final se o usuário
quer adicionar algo mais ao pedido e acrescente ao valor total considerando
o item e a quantidade.*/

int main()
{
    int codigoDoProduto, quantidadeDeItens, quantidaDoPedido;
    float valorTotalDoLanche = 0, valorParcialDoLanche;

    printf("\nInforme a quantidade de produtos desejados\n");
    scanf("%d", &quantidadeDeItens);

    for (int i = 0; i < quantidadeDeItens; i++)
    {
        printf("\nEscolha digitando o codigo abaixo: \ncachorro quente - 100\nbauru simples - 101\nbauru com ovo - 102\nhamburguer - 103\ncheeseburguer - 104\nrefrigerante - 105\n\nInforme o codigo do produto: \n");
        scanf("%d", &codigoDoProduto);

        if (codigoDoProduto == 100)
        {
            printf("\nInforme a quantidade do produto: \n");
            scanf("%d", &quantidaDoPedido);
            valorParcialDoLanche = quantidaDoPedido * 4.20;
            valorTotalDoLanche = valorTotalDoLanche + valorParcialDoLanche;
           
        }

        else if (codigoDoProduto == 101)
        {
            printf("\nInforme a quantidade do produto: \n");
            scanf("%d", &quantidaDoPedido);
            valorParcialDoLanche = quantidaDoPedido * 5.30;
            valorTotalDoLanche = valorTotalDoLanche + valorParcialDoLanche;
            
        }

        else if (codigoDoProduto == 102)
        {
            printf("\nInforme a quantidade do produto: \n");
            scanf("%d", &quantidaDoPedido);
            valorParcialDoLanche = quantidaDoPedido * 8.50;
            valorTotalDoLanche = valorTotalDoLanche + valorParcialDoLanche;
            
        }

        else if (codigoDoProduto == 103)
        {
            printf("\nInforme a quantidade do produto: \n");
            scanf("%d", &quantidaDoPedido);
            valorParcialDoLanche = quantidaDoPedido * 17.20;
            valorTotalDoLanche = valorTotalDoLanche + valorParcialDoLanche;
            
        }

        else if (codigoDoProduto == 104)
        {
            printf("\nInforme a quantidade do produto: \n");
            scanf("%d", &quantidaDoPedido);
            valorParcialDoLanche = quantidaDoPedido * 15.30;
            valorTotalDoLanche = valorTotalDoLanche + valorParcialDoLanche;
            
        }

        else if (codigoDoProduto == 105)
        {
            printf("\nInforme a quantidade do produto: \n");
            scanf("%d", &quantidaDoPedido);
            valorParcialDoLanche = quantidaDoPedido * 8;
            valorTotalDoLanche = valorTotalDoLanche + valorParcialDoLanche;
            
        }

        else
        {
            printf("\nCodigo invalido!\n");
            
        }
        
    }
    printf("\nO total do pedido eh de %.2f" , valorTotalDoLanche);
    return 0;
}