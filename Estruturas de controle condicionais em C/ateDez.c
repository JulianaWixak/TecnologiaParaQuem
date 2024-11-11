//Escreva um algoritmo que imprima as seguintes seqüências de números: 
//(1,1 2 3 4 5 6 7 8 9 10) (2, 1 2 3 4 5 6 7 8 9 10) 
//(3, 1 2 3 4 5 6 7 8 9 10) (4, 1 2 3 4 5 6 7 8 9 10) e assim 
//sucessivamente, até que o primeiro número (antes da
//vírgula), também chegue a 10.

#include <stdio.h>
int main(){

    int numeroInicial = 1;

    for (numeroInicial = 1; numeroInicial <= 10; numeroInicial++)
    {
            printf("\n%d, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10\n" , numeroInicial);
        
    }
    

    return 0;
}