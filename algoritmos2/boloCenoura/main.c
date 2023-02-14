#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    float oleo_soja, cenoura, ovos, acucar_refinado, farinha_trigo, fermento_po, chocolate_po, manteiga;

    printf("Preço do óleo de soja? \n");
    scanf("%f, \n", &oleo_soja);
    fflush(stdin);

    printf("Preço da cenoura? \n");
    scanf("%f, \n", &cenoura);
    fflush(stdin);

    printf("Preço dos ovos? \n");
    scanf("%f, \n", &ovos);
    fflush(stdin);

    printf("Preço do açucar refinado? \n");
    scanf("%f, \n", &acucar_refinado);
    fflush(stdin);

    printf("Preço da farinha de trigo? \n");
    scanf("%f, \n", &farinha_trigo);
    fflush(stdin);

    printf("Preço do fermento em pó? \n");
    scanf("%f, \n", &fermento_po);
    fflush(stdin);

    printf("Preço do chocolate em pó? \n");
    scanf("%f, \n", &chocolate_po);
    fflush(stdin);
    
    printf("Preço da manteiga? \n");
    scanf("%f, \n", &manteiga);
    fflush(stdin);

    system("pause");
    return 0;
}