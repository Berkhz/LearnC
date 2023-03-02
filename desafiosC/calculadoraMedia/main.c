#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    float nota1, nota2, 
    nota3, resultado;
    int continuar;

    do {
    printf("Bem vindo ao calculador de média!\n");
    printf("Me informe sua primeira nota: ");
    scanf("%f", &nota1);
    fflush(stdin);
    if (nota1 < 0 || nota1 > 10)
    {
        printf("Tente novamente! \n");
        return 0;
    }
    
    printf("Me informe sua segunda nota: ");
    scanf("%f", &nota2);
    fflush(stdin);
    if (nota2 < 0 || nota2 > 10)
    {
        printf("Tente novamente! \n");
        return 0;
    }
    
    printf("Me informe sua terceira nota: ");
    scanf("%f", &nota3);
    fflush(stdin);
    if (nota3 < 0 || nota3 > 10)
    {
        printf("Tente novamente! \n");
        return 0;
    }
    
    resultado = ((nota1 + nota2 + nota3) / 3);

    printf("A média final e de: %.1f \n", resultado);
    printf("Você deseja realizar outra consulta? (Digite 1 para SIM e 0 para NÃO!)\n");
    scanf("%i", &continuar);
    }
    
    while (continuar == 1);
    system("pause");
    return 0;
}