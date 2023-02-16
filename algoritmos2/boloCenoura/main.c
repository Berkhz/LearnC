#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    float etapa_1, etapa_2, oleo_soja, cenoura, 
    ovos, acucar_refinado,  farinha_trigo, 
    fermento_po, chocolate_po, manteiga;

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

    etapa_1 = ((oleo_soja/1000)*120)  + ((cenoura/7)*3) + ((ovos/12)*4) + ((acucar_refinado/1000)*320) +
    ((farinha_trigo/1000)*300) + ((fermento_po/50)*25);

    etapa_2 = ((manteiga/500)*12) + ((chocolate_po/200)*18) + ((acucar_refinado/1000)*150);

    printf("O cálculo do bolo foi de: %.2f \n", etapa_1);
    printf("O cálculo da cobertura do bolo foi de: %.2f \n", etapa_2);
    printf("O gasto total foi de: %.2f \n", (etapa_1 + etapa_2));
    
    system("pause");
    return 0;
}