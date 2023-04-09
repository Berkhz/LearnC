#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    char nome[50], aluno[50];
    char sexo, verificar, continuar = 'S';
    int idade, escolhaExercicio, i, num1, resultado, contador;
    float num1Decimal, auxDecimal, resultadoDecimal = 0, nota1, nota2;

    printf("Essa é a lista 3 de exercícios!\nEscolha um exercício de 1 a 15\n");
    scanf("%i", &escolhaExercicio);

    switch (escolhaExercicio)
    {
    case 1:
        //1) Solicitar o nome e idade de 3 pessoas (utilize a DO WHLE)
        i = 1;
        do
        {
            printf("Informe o %iº nome: ", i);
            scanf("%s", nome);

            printf("Informe a %iª idade: ", i);
            scanf("%i", &idade);

            i++;
        } while (i <= 3);
        break;
        
        case 2:
        //2) Solicitar o nome e idade de 3 pessoas (utilize a estrutura WHILE)
        i = 1;
        while (i <= 3)
        {
            printf("Informe o %iº nome: ", i);
            scanf("%s", nome);
            fflush(stdin);

            printf("Informe a %iª idade: ", i);
            scanf("%i", &idade);
            fflush(stdin);
            i++;
        }
        break;

        case 3:
        //3) Solicitar o nome e idade de 3 pessoas (utilize a estrutura FOR)
        i = 1;
        for (i = 1; i <= 3; i++)
        {
            printf("Informe o %iº nome: ", i);
            scanf("%s", nome);
            fflush(stdin);

            printf("Informe a %iº idade: ", i);
            scanf("%i", &idade);
            fflush(stdin);
        }
        break;

        case 4:
        //4) Apresentar os números de 5 a 20 na tela (linha a linha)
        i = 0;
        for (i = 5; i <= 20; i++)
        {
            printf("%i \n", i);
        }
        printf("\n");
        break;

        case 5:
        //5) Apresentar os números de 30 a 5 na tela (na mesma linha)
        i = 0;
        for (i = 30; i >= 5; i--)
        {
            printf("%i ", i);
        }
        break;

        case 6:
        //6) Solicite o nome, idade e sexo de uma pessoa. Valide o sexo entre (“F” / “M”) idade entre 10 e 100 anos
        printf("Informe seu nome: ");
        scanf("%s", &nome);
        fflush(stdin);

        do 
        {
            printf("Sua idade: ");
            scanf("%i", &idade);
            fflush(stdin);
        }
        while (idade < 10 || idade > 100);

        do 
        {
            printf("Seu sexo: (F / M): ");
            scanf("%c", &sexo);
            fflush(stdin);
        }
        while (sexo != 'F' && sexo != 'M');

        printf("Seu nome eh %s ", nome);
        printf("voce tem %i anos ", idade);
        printf("e possui o sexo %c! \n", sexo);
        break;

        case 7:
        //7) Solicite 15 número (entre 10 e 50) e apresente posteriormente a média
        for (i = 1; i <= 15; i++)
        {
            do
            {
                printf("Informe %i numero: ", i);
                scanf("%f", &num1Decimal);
                fflush(stdin);
            }
            while (num1Decimal < 10 || num1Decimal > 50);
            auxDecimal += num1Decimal;
        }
        printf("A media eh de: %.2f \n", auxDecimal / 15);
        break;

        case 8:
        //8) Apresente todos os números pares entre 5 e 50 (um na frente do outro) – Utilize o DO WHILE
        i = 5;
        do
        {
            if (i % 2 == 0)
            {
                printf("%i ", i);
            }
            i++;
        }
        while (i <= 50);
        break;

        case 9:
        //9) Apresente todos os números ímpares entre 5 e 50 (um na frente do outro) – Utilize o FOR
        for (i = 5; i <= 50; i++)
        {
            if (i % 2 == 1)
            {
                printf("%i ", i);
            }
        }
        break;

        case 10:
        //10) Solicite 10 números ao usuário. A cada número solicitado, apresente a mensagem PAR ou IMPAR e no fim,
        //apresente a média dos números ímpares.
        i = 1;
        contador = 0;
        do 
        {
            printf("Informe %i numero: ", i);
            scanf("%i", &num1);
            fflush(stdin);
            if (num1 % 2 == 0)
            {
                printf("PAR \n");
            }
            else 
            {
                printf("IMPAR \n");
                resultado += num1;
                contador++;
            }
            i++;
        }
        while (i <= 10);
        printf("%i \n", resultado / contador);
        break;

        case 11:
        //11) Solicite ao usuário o nome, idade e sexo (F/M) de algumas pessoas. A cada entrevista, o sistema deverá perguntar
        //se o usuário deseja continuar a informar dados, e caso não queira, apresente a média de idade das mulheres.
        printf("Bem vindo ao sistema de entrevistas!\nInforme os dados corretamente a seguir.\n");
        do 
        {
        fflush(stdin);

        printf("Nome: ");
        gets(nome);
        fflush(stdin);

        printf("Idade: ");
        scanf("%i", &idade);
        fflush(stdin);

        printf("Sexo (F/M): ");
        scanf("%c", &sexo);
        fflush(stdin);

        if (sexo == 'F')
        {
            resultadoDecimal += idade;
            auxDecimal++;
        }

        printf("Deseja continuar? (S/N) \n");
        scanf("%c", &verificar);
        fflush(stdin);
        
        if (verificar == 'N')
        {
            continuar = 'N';
        }

        }
        while (continuar == 'S');
        printf("A media de idade das mulheres e de: %.2f \n", resultadoDecimal / auxDecimal);
        break;

        case 12:
        //12) Construa um algoritmo que solicite os dados dos alunos (nome, nota1 e nota2) em uma sala de aula contendo 32
        //alunos. Posteriormente, apresente a média da turma e o percentual de aprovados e reprovados, considerando que a
        //média mínima para aprovação é 6,0. Obs. As notas fornecidas deverão ser validadas entre 0 e 10.
        for (i = 1; i <= 32; i++)
        {
            fflush(stdin);
            printf("Nome do aluno: ");
            gets(aluno);

            do 
            {
            printf("Insira a nota 1 do %s: ", aluno);
            scanf("%f", &nota1);
            }
            while (nota1 >= 0 || nota1 <= 10);

            do
            {
            printf("Insira a nota 2 do %s: ", aluno);
            scanf("%f", &nota2);
            }
            while (nota2 >= 0 || nota2 <= 10);
        }
        break;
        
    default:
        printf("Tente novamente");
        break;
    }

    system("pause");
    return 0;
}
