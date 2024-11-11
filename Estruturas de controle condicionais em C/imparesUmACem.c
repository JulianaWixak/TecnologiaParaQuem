//Escreva um aplicativo em C que mostra todos os números ímpares de 1 até 100

#include <stdio.h>
int main(){

int numerosImpares;

printf("Os números impares de um a cem são:\n");

for (numerosImpares = 1; numerosImpares <= 100; numerosImpares++)
{
    if (numerosImpares % 2 != 0)
    printf( "%d\n" ,numerosImpares);

}
    return 0;
}