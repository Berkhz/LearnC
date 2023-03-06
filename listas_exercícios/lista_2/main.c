#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Lista 2 de exercícios

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int escolhaExercicio, num1, num2, num3, resultado;
    float num1Decimal, num2Decimal, num3Decimal, resultadoDecimal;

    printf("Essa é a lista 2 de exercícios!\nEscolha um exercício de 1 a 25\n");
    scanf("%i", &escolhaExercicio);

    switch (escolhaExercicio)
    {
    case 1:
        //1) Solicite um valor inteiro e apresente a mensagem: NÚMERO PAR ou NÚMERO ÍMPAR
        printf("Insira um valor e vou mostrar se ele é par ou ímpar!\nValor: ");
        scanf("%i", &num1);
        if (num1 % 2 == 0)
        {
            printf("%i É PAR!\n", num1);
        } 
        else
        {
            printf("%i É ÍMPAR\n", num1);
        } 
        break;
    
    case 2:
        //2) Solicite 3 notas, calcule a média e apresente se o aluno está APROVADO ou REPROVADO,
        //considerando média mínima 6,0 para aprovação.
        printf("Insira 3 notas que irei calcular a média!\nPrimeira nota: ");
        scanf("%f", &num1Decimal);
        printf("Segunda nota: ");
        scanf("%f", &num2Decimal);
        printf("Terceira nota: ");
        scanf("%f", &num3Decimal);
        resultadoDecimal = (num1Decimal + num2Decimal + num3Decimal) / 3;
        if (resultadoDecimal >= 6.0)
        {
            printf("Sua nota: %.2f está aprovado!\n", resultadoDecimal);
        }
        else
        {
            printf("Sua nota: %.2f está reprovado!\n", resultadoDecimal);
        }
        break;

        case 3:
        //3) Solicite duas notas e indague ao usuário se ele deseja fazer prova substitutiva. Caso ele decida fazer,
        //solicite a nota da mesma. Posteriormente, calcule a média e apresente a situação do aluno APROVADO
        //ou REPROVADO.
        printf("Me informe duas notas!\nPrimeira nota:");
        scanf("%f", num1Decimal);

        printf("Segunda nota:");
        scanf("%f", num2Decimal);

        printf("Deseja fazer prova substitutiva? (Digite 1 para SIM || 0 para NÃO)");
        scanf("%i", num1);
        if (num1 == 1)
        {
            printf("Qual a nota da prova substitutiva?");
            scanf("%f", num3Decimal);
            if (num3Decimal > num1Decimal)
            {
                resultadoDecimal = (num2Decimal + num3Decimal) / 2;
                if (resultadoDecimal >= 6.0)
                {
                    printf("Media = %f está APROVADO \n", resultadoDecimal);
                }
                else
                {
                    printf("Media = %f está REPROVADO \n", resultadoDecimal);
                }
            }
            else
            {
                resultadoDecimal= (num1Decimal + num3Decimal) / 2;
                if (resultadoDecimal >= 6.0)
                {
                    printf("Media = %f está APROVADO \n", resultadoDecimal);
                }
                else
                {
                    printf("Media = %f está REPROVADO \n", resultadoDecimal);
                }
            }
        }
        break;

    default:
        printf("Tente novamente!\n");
        break;
    }
    system('pause');
    return 0;
}