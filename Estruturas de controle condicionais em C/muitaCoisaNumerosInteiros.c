//45.Faça um programa que receba valores inteiros positivos, calcule e mostre:

//A. Soma dos números digitados.
//B. Quantidade de números digitados.
//C. Média dos números digitados.
//D. Maior número digitado.
//E. Menor número digitado.
//F. Média dos números pares.
//G. Percentagem dos números ímpares entre todos os
//H. números digitados.

#include <stdio.h>
int main(){

int numero, soma = 0, quantidade = 0, media = 0, maiorNumero = 0, menorNumero = 0, mediaPares = 0, porcentagemImpares = 0;
char repeticao;
do
{
printf("Informe um numero inteiro positivo");
scanf("%d" , &numero);
printf("\nDeseja informar mais numeros(S/N)?");

soma += quantidade;


} while (repeticao =='S' || repeticao =='s');
    return 0;
}