//40.Crie um algoritmo que leia o valor inicial da contagem, o valor final e o
//incremento, mostrando em seguida todos os valores no intervalo:
//Ex: Digite o primeiro Valor: 3
//Digite o último Valor: 10
//Digite o incremento: 2
//Contagem: 3 5 7 9 Acabou!

#include <stdio.h>
int main(){

int valorInicial, valorFinal, incremento;

printf("Digite o primeiro valor: ");
scanf("%d" , &valorInicial);

printf("\nDigite o  valor final: ");
scanf("%d" , &valorFinal);

printf("\nDigite o incremento: ");
scanf("%d" , &incremento);

for (int i = valorInicial; valorInicial < valorFinal; valorInicial++)
{
 
    valorInicial = valorInicial + incremento;
    printf("\nA contagem eh: %d." , valorInicial);
}

printf("tAcabou!");

    return 0;
}
