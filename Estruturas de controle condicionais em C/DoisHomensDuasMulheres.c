//14.Escreva um algoritmo que leia as idades de 2 homens e de 2 mulheres
//(considere que as idades dos homens serão sempre diferentes entre si, bem
//como as das mulheres). Calcule e escreva a soma das idades do homem
//mais velho com a mulher mais nova, e o produto das idades do homem mais
//novo com a mulher mais velha.

#include <stdio.h>
int main(){

int idadeMulherUm, idadeMulherdois, idadeHomemUm, idadeHomemDois; 
int homemMaisVelho, mulherMaisNova, homemMaisNovo, mulherMaisVelha, soma, produto;


printf("Informe a idade de duas mulheres:\n");
scanf("%d  %d" , &idadeMulherUm , &idadeMulherdois);
printf("Informe a idade de dois homes:\n");
scanf("%d  %d" , &idadeHomemUm , &idadeHomemDois);

if (idadeHomemUm > idadeHomemDois )
{
    homemMaisVelho = idadeHomemUm;
}
else
{
    homemMaisVelho = idadeHomemDois;
}
if (idadeMulherUm < idadeMulherdois)
{
    mulherMaisNova = idadeMulherUm;
}
else
{
    mulherMaisNova = idadeMulherdois;
}

soma = homemMaisVelho + mulherMaisNova;
printf("\nA soma das idades do homem mais velho com a mulher mais nova eh de:\t %d" , soma);

if (idadeHomemUm < idadeHomemDois)
{
    homemMaisNovo = idadeHomemUm;
}
else
{
    homemMaisNovo = idadeHomemDois;
}

if (idadeMulherUm > idadeMulherdois)
{
    mulherMaisVelha = idadeMulherUm;
}
else
{
    mulherMaisVelha = idadeMulherdois;
}

produto = homemMaisNovo * mulherMaisVelha;
printf("\nO produto das idades do homem mais novo com a mulher mais velha eh de:\t %d" , produto);


    return 0;
}