//Elabore um algoritmo que dada a idade de um nadador classifica-o em 
//uma das seguintes categorias:
//infantil A = 5 - 7 anos
//infantil B = 8-10 anos
//juvenil A = 11-13 anos
//juvenil B = 14-17 anos
//adulto = maiores de 18 anos

#include <stdio.h>
int main (){

int idade;

printf("Informe sua idade: ");
scanf("%d" , &idade);

if (idade >= 5 && idade <= 7)
{
    printf("\nA classificacao desse nadador eh infantil A\n");
}
else if (idade >= 8 && idade <= 10)
{
     printf("\nA classificacao desse nadador eh infantil B\n");
}

else if (idade >= 11 && idade <= 13)
{
     printf("\nA classificacao desse nadador eh juvenil A\n");
}
else if (idade >= 14 && idade <= 17)
{
     printf("\nA classificacao desse nadador eh juvenil B\n");
}

else
{
     printf("\nA classificacao desse nadador eh adulto\n");
     
}
    return 0;
}