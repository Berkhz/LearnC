#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Lista 2 de exercícios

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    char sexo, nome[40], nome2[40];
    int escolhaExercicio, num1, num2, num3, i, resultado;
    float num1Decimal, num2Decimal, num3Decimal, num4Decimal, num5Decimal, maior, menor, resultadoDecimal;

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
        scanf("%c", &sexo);
        fflush(stdin);

        printf("Salario: ");
        scanf("%f", &num1Decimal);
        fflush(stdin);

        if (num1 > 50)
        {
            resultadoDecimal = num1Decimal * 1.35;
            printf("Novo salario reajustado = %f \n", resultadoDecimal);
        }
        else if (sexo == 'F' || sexo == 'f' && num1 <= 24)
        {
            resultadoDecimal = num1Decimal * 1.18;
            printf("Novo salario reajustado = %f \n", resultadoDecimal);
        }
        else if (sexo == 'M' || sexo == 'm' && num1 <= 27)
        {
            resultadoDecimal = num1Decimal * 1.175;
            printf("Novo salario reajustado = %f \n", resultadoDecimal);
        }
        else if (sexo == 'F' || sexo == 'f' && num1 >= 25 && num1 <= 50)
        {
            resultadoDecimal = num1Decimal * 1.23;
            printf("Novo salario reajustado = %f \n", resultadoDecimal);
        }
        else if (sexo == 'M' || sexo == 'm' && num1 >= 28 && num1 <= 38)
        {
            resultadoDecimal = num1Decimal * 1.21;
            printf("Novo salario reajustado = %f \n", resultadoDecimal);
        }
        else if (sexo == 'M' || sexo == 'm' && num1 >= 39 && num1 <= 50)
        {
            resultadoDecimal = num1Decimal * 1.23;
            printf("Novo salario reajustado = %f \n", resultadoDecimal);
        }
        break;
        case 8:
        //8) Solicite 5 números e apresente: O maior, o menor e a média. Obs. Não utilizar laço de repetição
        printf("Me informe 5 números!\nPrimeiro número: ");
        scanf("%f", &num1Decimal);

        printf("Segundo numero: ");
        scanf("%f", &num2Decimal);

        printf("Terceiro numero: ");
        scanf("%f", &num3Decimal);

        printf("Quarto numero: ");
        scanf("%f", &num4Decimal);

        printf("Quinto numero: ");
        scanf("%f", &num5Decimal);

        if (num1Decimal > num2Decimal && num1Decimal > num3Decimal && num1Decimal > num4Decimal && num1Decimal > num5Decimal)
        {
            maior = num1Decimal;
        }
        else if (num2Decimal > num1Decimal && num2Decimal > num3Decimal && num2Decimal > num4Decimal && num2Decimal > num5Decimal)
        {
            maior = num2Decimal;
        }
        else if (num3Decimal > num1Decimal && num3Decimal > num2Decimal && num3Decimal > num4Decimal && num3Decimal > num5Decimal)
        {
            maior = num3Decimal;
        }
        else if (num4Decimal > num1Decimal && num4Decimal > num2Decimal && num4Decimal > num3Decimal && num4Decimal > num5Decimal)
        {
            maior = num4Decimal;
        }
        else if (num5Decimal > num1Decimal && num5Decimal > num2Decimal && num5Decimal > num3Decimal && num5Decimal > num4Decimal)
        {
            maior = num5Decimal;
        }
        
        if (num1Decimal < num2Decimal && num1Decimal < num3Decimal && num1Decimal < num4Decimal && num1Decimal < num5Decimal)
        {
            menor = num1Decimal;
        }
        else if (num2Decimal < num1Decimal && num2Decimal < num3Decimal && num2Decimal < num4Decimal && num2Decimal < num5Decimal)
        {
            menor = num2Decimal;
        }
        else if (num3Decimal < num1Decimal && num3Decimal < num2Decimal && num3Decimal < num4Decimal && num3Decimal < num5Decimal)
        {
            menor = num3Decimal;
        }
        else if (num4Decimal < num1Decimal && num4Decimal < num2Decimal && num4Decimal < num3Decimal && num4Decimal < num5Decimal)
        {
            menor = num4Decimal;
        }
        else if (num5Decimal < num1Decimal && num5Decimal < num2Decimal && num5Decimal < num3Decimal && num5Decimal < num4Decimal)
        {
            menor = num5Decimal;
        }

        printf("O maior número é: %f \n", maior);
        printf("O menor número é: %f \n", menor);
        printf("A média dos números é: %f \n", (num1Decimal + num2Decimal + num3Decimal + num4Decimal + num5Decimal)/5);
        break;

        case 9:
        //9) Solicite um número inteiro e apresente ao usuário se o mesmo está no intervalo entre 50 e 100.
        printf("Me informe um número inteiro!\nNro: ");
        scanf("%i", &num3);
        if (num3 >= 50 && num3 <= 100)
        {
            printf("Esse valor está entre 50 e 100!\n Numero: %i", num3);
        }
        else 
        {
            printf("Esse valor nao está entre 50 e 100!\n Numero: %i", num3);
        }
        break;

        case 10:
        //10) Calcule e apresente a média de 10 números fornecidos pelo usuário, utilizando o laço de repetição FOR
        i = 1;
        for (i = 1; i <= 10; i++)
        {
            printf("Me forneca %i numero: ", i);
            scanf("%f", &num1Decimal);
            num2Decimal += num1Decimal; // num2Decimal = num2Decimal + num1Decimal
        }
        resultadoDecimal = num2Decimal / 10;
        printf("A media desses numeros e de: %.2f \n", resultadoDecimal);
        break;

        case 11:
        //11) Calcule e apresente a média de 10 números fornecidos pelo usuário, utilizando o laço de repetição DO / WHILE
        i = 1;
        do
        {
            printf("Me forneca %i numero: ", i);
            scanf("%f", &num1Decimal);
            num2Decimal += num1Decimal; // num2Decimal = num2Decimal + num1Decimal
            i++;
        } while (i <= 10);
        resultadoDecimal = num2Decimal / 10;
        printf("A media desses numeros e de: %.2f \n", resultadoDecimal);
        break;

        case 12:
        //12) Calcule e apresente a média de 10 números fornecidos pelo usuário, utilizando o laço de repetição WHILE
        i = 1;
        while (i <= 10)
        {
            printf("Me forneca %i numero: ", i);
            scanf("%f", &num1Decimal);
            num2Decimal += num1Decimal; // num2Decimal = num2Decimal + num1Decimal
            i++;
        }
        resultadoDecimal = num2Decimal / 10;
        printf("A media desses numeros e de: %.2f \n", resultadoDecimal);
        break;

        case 13:
        //13) Solicite dois valores inteiros, onde o primeiro deverá estar entre 10 e 50 e o segundo deverá ser maior
        //que o primeiro, em ao menos 15 unidades. Posteriormente, apresente a soma do primeiro com o
        //segundo.
        do 
        {
            printf("Primeiro valor: ");
            scanf("%i", &num1);
        } 
        while (num1 < 10 || num1 > 50);

        do 
        {
        printf("Segundo valor: ");
        scanf("%i", &num2);
        }
        while (num2 < num1 + 15);
        resultado = num1 + num2;
        printf("A soma entre eles eh de: %i \n", resultado);
        break;

        case 14:
        //14) Faça um programa que apresente todos os números inteiros entre 12 e 25, na horizontal
        i = 12;
        for (i = 12; i <= 25; i++)
        {
            if (i % 2 == 0)
            {
                printf("%i ", i);
            }
        }
        printf("\n");
        break;

        case 15:
        //15) Faça um programa que apresente todos os números inteiros, entre 14 e 30, na vertical
        i = 14;
        for (i = 14; i <= 30; i++)
        {
            if (i % 2 == 0)
            {
                printf("%i ", i);
                printf("\n");
            }
        }
        printf("\n");
        break;
        
        case 16:
        //16) Solicite dois valores, onde o segundo deverá ser maior que o primeiro. Posteriormente, apresente na
        //vertical, todos os números entre o primeiro valor e o segundo. Utilize o laço FOR
        printf("Primeiro valor: ");
        scanf("%i", &num1);

        do // Verificação
        {
        printf("Segundo valor: ");
        scanf("%i", &num2);
        }
        while (num2 < num1 + 1);

        for (i = num1; i <= num2; i++)
        {
            resultado = resultado + num1;
            printf("%i \n", resultado);
            resultado = resultado + 1;
        }
        break;

        case 17:
        //17) Repita o exercício anterior, utilizando o laço DO WHILE
        printf("Primeiro valor: ");
        scanf("%i", &num1);

        do // Verificação
        {
        printf("Segundo valor: ");
        scanf("%i", &num2);
        }
        while (num2 < num1 + 1);

        do
        {
            resultado += num1;
            printf("%i \n", num1);
            num1++;
        }
        while (num1 < num2);
        break;

        case 18:
        //18) Repita o exercício anterior, utilizando o laço WHILE
        printf("Primeiro valor: ");
        scanf("%i", &num1);

        do // Verificação
        {
        printf("Segundo valor: ");
        scanf("%i", &num2);
        }
        while (num2 < num1 + 1);

        while (num1 < num2)
        {
            resultado += num1;
            printf("%i \n", num1);
            num1++;
        }
        break;

        case 19:
        //19) A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações sem juros. Faça um
        //Programa em linguagem C que receba um valor de uma compra e mostre o valor das prestações
        printf("Digite o valor da compra: R$ ");
        scanf("%f", &num1Decimal);

        resultadoDecimal = num1Decimal / 5;

        printf("O valor de cada prestacao e R$ %.2f\n", resultadoDecimal);
        break;

        case 20:
        //20) Construa um Programa em linguagem C que solicite dois valores inteiros e apresente a produto de um
        //pelo outro sem no entanto utilizar o operador aritmético de multiplicação. Utilize o laço FOR
        printf("Primeiro valor: ");
        scanf("%i", &num1);

        printf("Segundo valor: ");
        scanf("%i", &num2);

        for (i = 0; i < num2; i++)
        {
            resultado += num1;
        }
        printf("%i \n", resultado);
        break;

        case 21:
        //21) Construa um Programa em linguagem C que solicite dois valores inteiros e apresente a produto de um
        //pelo outro sem no entanto utilizar o operador aritmético de multiplicação. Utilize o laço DO WHILE
        printf("Primeiro valor: ");
        scanf("%i", &num1);

        printf("Segundo valor: ");
        scanf("%i", &num2);
        i = 0;
        do
        {
            resultado = resultado + num1;
            i += 1;
        }
        while (i < num2);
        printf("%i \n", resultado);
        break;

        case 22:
        //22) Construa um Programa em linguagem C que solicite dois valores inteiros e apresente a produto de um
        //pelo outro sem no entanto utilizar o operador aritmético de multiplicação. Utilize o laço WHILE
        printf("Primeiro valor: ");
        scanf("%i", &num1);

        printf("Segundo valor: ");
        scanf("%i", &num2);
        i = 0;
        while (i < num2)
        {
            resultado = resultado + num1;
            i += 1;
        }
        printf("%i \n", resultado);
        break;

        case 23:
        //23) Construa um programa que apresente todos os números pares entre 11 e 30
        num1 = 11;
        for (i = 11; i <= 30; i++)
        {
            if (num1 % 2 == 0)
            {
                printf("%i \n", num1);
            }
            num1++;
        }
        break;

        case 24:
        //24) Construa um programa que solicite um valor inteiro e apresente ao usuário se o mesmo é ou não um
        //número PRIMO
        printf("Digite um número inteiro: ");
        scanf("%i", &num1);
    
         for (i = 2; i <= num1 / 2; i++) 
         {
            if (num1 % i == 0) {
            num2 = 0; //nao é primo
            break;
            }
        }
    
        if (num2) 
        {
        printf("%i eh um numero primo.\n", num1);
        } 
        else 
        {
        printf("%i nao e um numero primo.\n", num1);
        }
        break;

        case 25:
        //25) Construa um programa que apresente todos os números PRIMOS entre 1 e 500
        printf("Números primos entre 1 e 500: \n");
    
        for (i = 2; i <= 500; i++) {
            num1 = 1; //é primo
        
        for (num2 = 2; num2 <= i / 2; num2++) {
            if (i % num2 == 0) {
            num1 = 0;
            break;
            }
        }
        
        if (num1) {
            printf("%i ", i);
        }
    }
    
    printf("\n");
        break;

    default:
        printf("Tente novamente!\n");
        break;
    }
    system("pause");
    return 0;
}