/* um algoritmo que lê um valor em reais e calcula qual o menor
número possível de notas de 100, 50, 10, 5 e 1 em que o valor lido pode ser
decomposto. Escrever o valor lido e a relação de notas necessárias.
Em seguida, veja se o usuário deseja repetir. Tratar casos de opções invalidas*/

#include <stdio.h>

int main()
{

    int ValorEmReais, notas100, notas50, notas10, notas5, notas1;
    char repeticao;

    do
    {
        printf("Informe o valor em reais ");
        scanf("%d", &ValorEmReais);

        notas100 = ValorEmReais / 100;
        ValorEmReais = ValorEmReais % 100;

        notas50 = ValorEmReais / 50;
        ValorEmReais = ValorEmReais % 50;

        notas10 = ValorEmReais / 10;
        ValorEmReais = ValorEmReais % 10;

        notas5 = ValorEmReais / 5;
        ValorEmReais = ValorEmReais % 5;

        notas1 = ValorEmReais;

        printf("A quantidade de notas de 100 eh %d\nA quantidade de notas de 50 eh %d\nA quantidade de notas de 10 eh %d\nA quantidade de notas de 5 eh %d\nA quantidade de notas de 1 eh %d", notas100, notas50, notas10, notas5, notas1);
        do
        {
            printf("\n\nDeseja repetir? (S/N)");
            fflush(stdin);
            scanf("%c", &repeticao);

            if (repeticao != 'S' && repeticao != 'N')
            {
                printf("\nOpcao invalida. Digite apenas S ou N");
            }
        } while (repeticao != 'S' && repeticao != 'N');

    } while (repeticao == 'S');

    return 0;
}