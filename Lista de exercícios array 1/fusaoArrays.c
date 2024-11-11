//Crie um programa que leia dois arrays de 5 elementos cada, e depois crie umterceiro
//array que contenha os elementos dos dois primeiros arrays, resultando emumarray de
//10 elementos

#include <stdio.h>
int main(){

    int vetorUm[5], vetorDois[5], vetorTres[10];

    
printf("informe 5 numeros para o primeiro vetor\n");
    for (int i = 0; i < 5; i++){

    scanf("%d" , &vetorUm[i]);
}

    
printf("informe 5 numeros para o segundo vetor\n");
    for (int i = 0; i < 5; i++){

    scanf("%d" , &vetorDois[i]);
}

for (int i = 0; i < 5; i++){

    vetorTres[i] = vetorUm[i];
}

for (int i = 0; i < 5; i++){

    vetorTres[i+5] = vetorDois[i];
}

printf("\nOs elementos do terceiro vetor (combinados) são:\n");
    for (int i = 0; i < 10; i++) 
{
    printf("%d ", vetorTres[i]);

    
}
return 0;
}