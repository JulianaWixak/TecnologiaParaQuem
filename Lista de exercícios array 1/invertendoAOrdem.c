/*Faça um programa que leia 7 números inteiros e os armazene em um array. O programa
deve, em seguida, imprimir os elementos na ordem inversa à da leitura./**/

#include <stdio.h>

int main () {
int numerosInteiros[7];

for (int i = 0; i < 7; i++){
 printf("Me informe 7 numeros\n");
 scanf("%d" , &numerosInteiros[i]);
}

for(int i = 6; i >= 0; i--){
     printf("\nA ordem inversa eh %d" , numerosInteiros[i]);
}


    return 0;
}
