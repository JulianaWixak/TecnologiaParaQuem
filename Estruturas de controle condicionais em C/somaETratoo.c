// Ler 2 valores, calcular e escrever a soma dos inteiros existentes entre os 2 valores lidos
//(incluindo os valores informados pelo usuário). Tratar casos onde segundo
// valor lido for menor que o primeiro valor, exibindo a mensagem “Numero invalido” e
//  executando novamente a operação.

#include <stdio.h>
int main()
{

    int valorUm, valorDois, soma;
    do
    {
        printf("Informe dois numeros:\n");
        scanf("%d %d", &valorUm, &valorDois);
        if (valorUm > valorDois)
        {
            printf("numero invalido. o primeiro deve ser menor que o segundo.\n");
        }
        else
        {
            soma = 0;
            for (int i = valorUm; i <= valorDois; i++)
            {
                soma += i;
            }
            printf("A soma dos inteiros entre %d e %d eh %d \n" , valorUm,valorDois, soma);
        
        break;
        }

    } while (valorUm>valorDois);

        return 0;
}