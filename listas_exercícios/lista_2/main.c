#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Lista 2 de exercícios

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    char sexo, nome[40], nome2[40];
    int escolhaExercicio, num1, num2, num3, i, resultado;
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
        printf("Me informe duas notas!\nPrimeira nota: ");
        scanf("%f", &num1Decimal);

        printf("Segunda nota: ");
        scanf("%f", &num2Decimal);

        printf("Deseja fazer prova substitutiva? (Digite 1 para SIM || 0 para NÃO)\n");
        scanf("%i", &num1);
        if (num1 == 1)
         {
             printf("Qual a nota da prova substitutiva?\n");
             scanf("%f", &num3Decimal);
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
         else
         {
             resultadoDecimal= (num1Decimal + num2Decimal) / 2;
             printf("Media = %f está REPROVADO \n", resultadoDecimal);
         }
        break;

        case 4:
        //4) Solicite duas variáveis inteiras (valor1 e valor2) e apresente a mensagem: VALOR1 é maior, VALOR2 é
        //maior ou VALORES IGUAIS.
        printf("Insira dois valores!\nPrimeiro valor: ");
        scanf("%i", &num1);

        printf("Segundo valor: ");
        scanf("%i", &num2);

        if (num1 == num2)
        {
            printf("%i é igual ao valor %i \n", num1, num2);
        }
        else if (num1 > num2)
        {
            printf("%i é maior que o valor %i \n", num1, num2);
        }
        else 
        {
            printf("%i é menor que o valor %i \n", num1, num2);
        }
        break;

        case 5:
        //5) Solicite (número inteiro) o mês atual ao usuário e apresente o correspondente mês por extenso. 
        printf("Informe o número do atual mês (pode ser de 1 a 12): ");
        scanf("%i", &num1);

        if (num1 == 1)
        {
            printf("JANEIRO\n");
        }
        else if (num1 == 2)
        {
            printf("FEVEREIRO\n");
        }
        else if (num1 == 3)
        {
            printf("MARÇO\n");
        }
        else if (num1 == 4)
        {
            printf("ABRIL\n");
        }
        else if (num1 == 5)
        {
            printf("MAIO\n");
        }
        else if (num1 == 6)
        {
            printf("JUNHO\n");
        }
        else if (num1 == 7)
        {
            printf("JULHO\n");
        }
        else if (num1 == 8)
        {
            printf("AGOSTO\n");
        }
        else if (num1 == 9)
        {
            printf("SETEMBRO\n");
        }
        else if (num1 == 10)
        {
            printf("OUTUBRO\n");
        }
        else if (num1 == 11)
        {
            printf("NOVEMBRO\n");
        }
        else
        {
            printf("DEZEMBRO\n");
        }
        break;

        case 6:
        //6) Solicite o nome e a idade de 2 pessoas. Posteriormente, apresente o NOME da pessoa mais velha,
        //seguida de uma frase “é a mais velha”, ou a mensagem “As pessoas possuem a mesma idade”
        printf("Informe o nome e idade de 2 pessoas!\nNome primeira pessoa: ");
        scanf("%s", &nome);
        fflush(stdin);

        printf("Idade primeira pessoa: ");
        scanf("%i", &num1);
        fflush(stdin);

        printf("Nome segunda pessoa: ");
        scanf("%s", &nome2);
        fflush(stdin);

        printf("Idade segunda pessoa: ");
        scanf("%i", &num2);
        fflush(stdin);

        if (num1 == num2)
        {
            printf("As pessoas tem a mesma idade!\n");
        }
        else if (num1 > num2)
        {
            printf("%s é a pessoa mais velha!\n", nome);
        }
        else 
        {
            printf("%s é a pessoa mais velha!\n", nome2);
        }
        break;

        case 7:
        //7) Solicitar o nome, idade, sexo e salário de uma pessoa. Posteriormente, faça o reajuste do salário de
        //acordo com as condições abaixo e posteriormente apresente o novo salário (com reajuste):
        //- Acima de 50 anos, reajuste de 35%
        //- Mulheres com até 24 anos, reajuste de 18%
        //- Homens com até 27 anos, reajuste de 17,5%
        //- Mulheres entre 25 e 50 anos, reajuste de 23%
        //- Homens entre 28e 38 anos, reajuste de 21%
        //- Homens entre 39 e 50 anos, reajuste de 23%
        printf("Me informe um nome, idade, sexo e salario, para fazer reajuste de salario!\nNome: ");
        scanf("%s", &nome);
        fflush(stdin);

        printf("Idade: ");
        scanf("%i", &num1);
        fflush(stdin);

        printf("Sexo (M / F / O): ");
        scanf("%s", &sexo);
        fflush(stdin);

        printf("Salario: ");
        scanf("%f", &num1Decimal);
        fflush(stdin);

        if (num1 > 50)
        {
            resultadoDecimal = num1Decimal * 1.35;
            printf("Novo salario reajustado = %f \n", resultadoDecimal);
        }
        else if (sexo == "F" && num1 <= 24)
        {
            resultadoDecimal = num1Decimal * 1.18;
            printf("Novo salario reajustado = %f \n", resultadoDecimal);
        }
        else if (sexo == "M" && num1 <= 27)
        {
            resultadoDecimal = num1Decimal * 1.175;
            printf("Novo salario reajustado = %f \n", resultadoDecimal);
        }
        else if (sexo == "F" && num1 >= 25 && num1 <= 50)
        {
            resultadoDecimal = num1Decimal * 1.23;
            printf("Novo salario reajustado = %f \n", resultadoDecimal);
        }
        else if (sexo == "M" && num1 >= 28 && num1 <= 38)
        {
            resultadoDecimal = num1Decimal * 1.21;
            printf("Novo salario reajustado = %f \n", resultadoDecimal);
        }
        else if (sexo == "M" && num1 >= 39 && num1 <= 50)
        {
            resultadoDecimal = num1Decimal * 1.23;
            printf("Novo salario reajustado = %f \n", resultadoDecimal);
        }
        break;

    default:
        printf("Tente novamente!\n");
        break;
    }
    system("pause");
    return 0;
}