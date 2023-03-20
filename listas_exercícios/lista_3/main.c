#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    char nome[50], sexo[1];
    int idade, escolhaExercicio, i;

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
        
    default:
        printf("Tente novamente");
        break;
    }

    system("pause");
    return 0;
}
