#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    char nome[50], sexo;
    int idade, escolhaExercicio, i;
    float num1Decimal, auxDecimal;

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

            printf("Informe a %iª idade: ", i);
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
        break;
        
    default:
        printf("Tente novamente");
        break;
    }

    system("pause");
    return 0;
}
