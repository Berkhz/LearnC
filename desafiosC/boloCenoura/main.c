#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    // float etapa_1, etapa_2, oleo_soja, cenoura, 
    // ovos, acucar_refinado,  farinha_trigo, 
    // fermento_po, chocolate_po, manteiga;

    // printf("Preço do óleo de soja? \n");
    // scanf("%f, \n", &oleo_soja);
    // fflush(stdin);

    // printf("Preço da cenoura? \n");
    // scanf("%f, \n", &cenoura);
    // fflush(stdin);

    // printf("Preço dos ovos? \n");
    // scanf("%f, \n", &ovos);
    // fflush(stdin);

    // printf("Preço do açucar refinado? \n");
    // scanf("%f, \n", &acucar_refinado);
    // fflush(stdin);

    // printf("Preço da farinha de trigo? \n");
    // scanf("%f, \n", &farinha_trigo);
    // fflush(stdin);

    // printf("Preço do fermento em pó? \n");
    // scanf("%f, \n", &fermento_po);
    // fflush(stdin);

    // printf("Preço do chocolate em pó? \n");
    // scanf("%f, \n", &chocolate_po);
    // fflush(stdin);
    
    // printf("Preço da manteiga? \n");
    // scanf("%f, \n", &manteiga);
    // fflush(stdin);

    // etapa_1 = ((oleo_soja/1000)*120)  + ((cenoura/7)*3) + ((ovos/12)*4) + ((acucar_refinado/1000)*320) +
    // ((farinha_trigo/1000)*300) + ((fermento_po/50)*25);

    // etapa_2 = ((manteiga/500)*12) + ((chocolate_po/200)*18) + ((acucar_refinado/1000)*150);

    // printf("O cálculo do bolo foi de: %.2f \n", etapa_1);
    // printf("O cálculo da cobertura do bolo foi de: %.2f \n", etapa_2);
    // printf("O gasto total foi de: %.2f \n", (etapa_1 + etapa_2));
    float etapa_1, etapa_2, guarda; // Cálculo com 3 variáveis apenas

    // Etapa 1
    printf("Preço do óleo de soja? \n");
    scanf("%f, \n", &guarda);
    etapa_1 = guarda/1000*120;
    guarda = 0;
    fflush(stdin);

    printf("Preço da cenoura? \n");
    scanf("%f, \n", &guarda);
    etapa_1 = etapa_1 + guarda/7*3;
    guarda = 0;
    fflush(stdin);

    printf("Preço dos ovos? \n");
    scanf("%f, \n", &guarda);
    etapa_1 = etapa_1 + guarda/12*4;
    guarda = 0;
    fflush(stdin);

    printf("Preço do açucar refinado? \n");
    scanf("%f, \n", &guarda);
    etapa_1 = etapa_1 + guarda/1000*320;
    guarda = 0;
    fflush(stdin);

    printf("Preço da farinha de trigo? \n");
    scanf("%f, \n", &guarda);
    etapa_1 = etapa_1 + guarda/1000*300;
    guarda = 0;
    fflush(stdin);

    printf("Preço do fermento em pó? \n");
    scanf("%f, \n", &guarda);
    etapa_1 = etapa_1 + guarda/50*25;
    fflush(stdin);

    // Etapa 2
    guarda = 0;
    printf("Preço do chocolate em pó? \n");
    scanf("%f, \n", &guarda);
    etapa_2 = guarda/200*18;
    guarda = 0;
    fflush(stdin);

    printf("Preço da manteiga? \n");
    scanf("%f, \n", &guarda);
    etapa_2 = etapa_2 + guarda/500*12;
    guarda = 0;
    fflush(stdin);

    printf("Preço do açucar refinado? \n");
    scanf("%f, \n", &guarda);
    etapa_2 = etapa_2 + guarda/1000*150;
    fflush(stdin);

    printf("O cálculo do bolo foi de: %.2f \n", etapa_1); // resultado etapa 1
    printf("O cálculo da cobertura do bolo foi de: %.2f \n", etapa_2); // resultado etapa 2
    printf("O gasto total foi de: %.2f \n", etapa_1 + etapa_2); // total
    
    system("pause");
    return 0;
}