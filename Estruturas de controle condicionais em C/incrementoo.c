//40.Crie um algoritmo que leia o valor inicial da contagem, o valor final e o
//incremento, mostrando em seguida todos os valores no intervalo:
//Ex: Digite o primeiro Valor: 3
//Digite o último Valor: 10
//Digite o incremento: 2
//Contagem: 3 5 7 9 Acabou!

#include <stdio.h>
int main(){

    int valorInicial, valorFinal, incremento;

    printf("Me informe o valor inicial:\n ");
    scanf("%d" , &valorInicial);

    printf("Me informe o valor final:\n ");
    scanf("%d" , &valorFinal);

    printf("Me informe o incremento:\n ");
    scanf("%d" , &incremento);

    for (int i = valorInicial; i < valorFinal; i++)
    {
        valorInicial += incremento;
        printf("A contagem  eh:\t %d" , valorInicial);
    }
    
    printf("\nacabou!");


    return 0;
}