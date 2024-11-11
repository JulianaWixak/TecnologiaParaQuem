// Escreva um programa que leia 5 números inteiros e armazene-os em um
// array. Emseguida, calcule e imprima a soma e o produto de todos os
// elementos do array.

#include <stdio.h>
int main()
{

    int numerosInteiros[5], soma = 0, produto = 1;

    for (int i = 0; i < 5; i++)
    {
     printf("Informe 5 numeros inteiros:\n");
     scanf("%d", &numerosInteiros[i]);
       
        soma += numerosInteiros[i];
        produto *= numerosInteiros[i];
  
    }
     printf("\n a soma de todos esse numeros eh %d\n e o produto eh %d", soma, produto);

    return 0;
}