//Contagem de Números Pares:
/*Desenvolva um programa que leia 6 números inteiros, armazene-os em um array e conte
quantos desses números são pares./**/

#include <stdio.h>

int main(){
 
   int NumerosInteiros[6], numerosPares = 0;

    for (int i = 0; i < 6; i++){
         printf("Informe o numero %d\n", i + 1);
        scanf("%d", &NumerosInteiros[i]);

    }

    for (int i = 0; i < 6; i++){
        if (NumerosInteiros[i] % 2 == 0) {
            numerosPares++;
        }
    }
    
    printf("\n\nA quantidade de numeros pares eh %d\n" , numerosPares);

    return 0;

}