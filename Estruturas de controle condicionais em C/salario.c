/*Desenvolva um aplicativo que leia o salário e o sexo de vários funcionários.
No final, mostre o total de salários pagos aos homens e o total pago às
mulheres. O programa vai perguntar ao usuário se ele quer continuar ou não
sempre que ler os dados de um funcionário*/

#include <stdio.h>
int main (){

float salario, salarioHomens = 0, salarioMulheres = 0;
char sexo, repeticao;

do{

printf("Informe seu genero com letra maiuscula (M/F) e seu salario\n");
scanf(" %c %f" , &sexo, &salario);

if (sexo == 'M')

{
   salarioHomens += salario;
   // salarioHomens = salarioHomens + salario
}
else if (sexo == 'F'){
   salarioMulheres += salario;

}
else {
    printf("Informação inválida. O gênero deve ser M ou F.\n");
}
  do
    {
            printf("\n\nDeseja repetir? (S/N)");
            fflush(stdin);
            scanf("%c", &repeticao);

            if (repeticao != 'S' && repeticao != 'N'){
                printf("\nOpcao invalida. Digite apenas S ou N");
            
            }
             } while (repeticao != 'S' && repeticao != 'N');
    }
             while (repeticao == 'S');

 printf("O total de salários pagos aos homens eh %f" , salarioHomens);
 printf("\nO total de salários pagos as mulheres eh %f" , salarioMulheres);
    

    return 0;

}