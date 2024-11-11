// Crie um programa que leia o sexo e a idade de várias pessoas. O programa
// vai perguntar se o usuário quer continuar ou não a cada pessoa. No final, mostre:
// a) qual é a maior idade lida
// b) quantos homens foram cadastrados
// c) qual é a idade da mulher mais jovem
// d) qual é a média de idade entre os homens
// g) A média de idade do grupo
// h) Quantos homens tem mais de 30 anos
// i) Quantas mulheres tem menos de 18 anos

#include <stdio.h>
int main()
{

    int idade, maiorIdade = 0, idadeMulheres = 0, idadeHomens = 0, totalHomens = 0, totalMulheres = 0, media, mediaHomens;
    int mulherMaisJovem, somaIdadeHomens = 0, somaIdadeMulheres = 0, somaIdadeGrupo = 0, homensMaisTrinta = 0, mulheresMenosDezoito = 0;
    char sexo, repeticao;

    do
    {

        printf("Informe seu sexo(M/F) e sua idade:\n");
        scanf("%c %d", &sexo, &idade);

        if (idade > maiorIdade)
        {
            maiorIdade = idade;
        }

        if (sexo == 'M')
        {
            totalHomens++;
            totalHomens = +idadeHomens;
        }

        if (sexo == 'F')
        {
            totalMulheres++;
            totalMulheres = +idadeMulheres;
            if (idade < mulherMaisJovem)
            {
                mulherMaisJovem = idade;
            }
        }

        somaIdadeHomens = +idadeHomens;
        somaIdadeMulheres == idadeMulheres;
        mediaHomens = somaIdadeHomens / totalHomens;
        somaIdadeGrupo = somaIdadeHomens + somaIdadeMulheres;
        media = somaIdadeGrupo / (totalHomens + totalMulheres);

        if (idadeHomens > 30)
        {
            totalHomens = homensMaisTrinta;
            homensMaisTrinta++;
        }

        if (idadeMulheres < 18)
        {
            totalMulheres = mulheresMenosDezoito;
            mulheresMenosDezoito++;
        }

        printf("Deseja inserir mais pessoas? (S/N)\n");
        scanf("%c", &repeticao);

    } while (repeticao == 'S' || repeticao == 's');

    printf("A maior idade eh:\n", maiorIdade);
    printf("\nO numero de homens cadastrados eh:\n", totalHomens);
    printf("\n A mulher mais jovem tem:\n", mulherMaisJovem);
    printf("\nA media de idade do grupo eh: ", media);
    printf("\nA quantidade de homens 30+ eh: ", homensMaisTrinta);
    printf("\nA media da idade dos homens eh: ", mediaHomens);

    return 0;
}