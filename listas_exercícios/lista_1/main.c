#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
// Lista 1 de exercícios!

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int escolhaExercicio, num1, num2, num3, resultado; 
    // Variáveis para exercícios que contemplam números inteiros.
    float num1Decimal, num2Decimal, num3Decimal, num4Decimal, num5Decimal, num6Decimal, subtracao, resultadoDecimal; 
    // Variáveis para exercícios que contemplam números decimais.

    printf("Essa é a lista 1 de exercícios!\nEscolha um exercício de 1 a 28\n");
    scanf("%i", &escolhaExercicio);

    switch(escolhaExercicio)
    {
        case 1:
        //1) Apresente a mensagem “Testando um algoritmo”.
        printf("Testando um algoritmo\n");
        break;

        case 2: 
        //2) Apresente as mensagens “Testando um algoritmo” e também “Linguagem C” (uma abaixo da outra)
        printf("Testando um algoritmo\nEm Linguagem C\n");
        break;

        case 3:
        //3) Ler uma variável e apresentar seu dobro.
        printf("Insira um valor que vou te mostrar o dobro :\n");
        scanf("%i", &num1);
        fflush(stdin);
        num1 = num1 * 2;
        printf("Resultado: %i \n", num1);
        break;

        case 4:
        //4) Ler uma variável e apresentar seu Triplo.
        printf("Insira um valor que vou te mostrar o triplo :\n");
        scanf("%i", &num1);
        fflush(stdin);
        num1 = num1 * 3;
        printf("Resultado: %i \n", num1);
        break;

        case 5:
        //5) Ler uma variável e apresentar sua metade.
        printf("Insira um valor que vou te mostrar sua metade :\n");
        scanf("%f", &num1Decimal);
        fflush(stdin);
        num1Decimal = num1Decimal / 2;
        printf("Resultado: %.2f \n", num1Decimal);
        break;

        case 6:
        //6) Ler uma variável e apresentar 25% da mesma.
        printf("Insira um valor que vou te mostrar 25%% deste valor :\n");
        scanf("%f", &num1Decimal);
        fflush(stdin);
        num1Decimal = num1Decimal * 0.25;
        printf("Resultado: %.2f \n", num1Decimal);
        break;
        
        case 7:
        //7) Ler uma variável e apresentar 60% da mesma.
        printf("Insira um valor que vou te mostrar 60%% deste valor :\n");
        scanf("%f", &num1Decimal);
        fflush(stdin);
        num1Decimal = num1Decimal * 0.60;
        printf("Resultado: %.2f \n", num1Decimal);
        break;

        case 8:
        //8) Ler duas variáveis a apresentar 45% da soma destas.
        printf("Insira dois valores que vou te mostrar 45%% da soma destas:\nPrimeiro valor :");
        scanf("%f", &num1Decimal);
        fflush(stdin);
        printf("Segundo valor :");
        scanf("%f", &num2Decimal);
        fflush(stdin);
        resultadoDecimal = num1Decimal + num2Decimal;
        printf("Resultado: %.2f \n", resultadoDecimal * 0.45);
        break;

        case 9:
        //9) Ler duas variáveis e apresentar a subtração de uma pela outra.
        printf("Insira dois valores que vou apresentar a subtração de uma pela outra\nPrimeiro valor :");
        scanf("%i", &num1);
        fflush(stdin);
        printf("Segundo valor :");
        scanf("%i", &num2);
        fflush(stdin);
        resultado = num1 - num2;
        printf("Resultado: %i \n", resultado);
        break;

        case 10:
        //10) Ler três variáveis (A,B,C) e apresentar o resultado da seguinte fórmula: D=A+C-B.
        printf("Insira tres valores que vou apresentar o resultado da fórmula: D=A+C-B\nValor de A :");
        scanf("%i", &num1);
        fflush(stdin);
        printf("Valor de B :");
        scanf("%i", &num2);
        fflush(stdin);
        printf("Valor de C :");
        scanf("%i", &num3);
        fflush(stdin);
        resultado = (num1 + num3) - num2;
        printf("Resultado da fórmula D=A+C-B\nD = %i \n", resultado);
        break;

        case 11:
        //11) Encontrar e apresentar o valor para Z aplicando a seguinte fórmula: Z=(L+A * 2) / C.
        printf("Informe valores para encontrar o resultado de Z = (L + A * 2) / C\nValor de L :");
        scanf("%f", &num1Decimal);
        fflush(stdin);
        printf("Valor de A :");
        scanf("%f", &num2Decimal);
        fflush(stdin);
        printf("Valor de C :");
        scanf("%f", &num3Decimal);
        fflush(stdin);
        resultadoDecimal = (num1Decimal + num2Decimal * 2) / num3Decimal;
        printf("Resultado da fórmula Z = (L + A * 2) / C\nZ = %.2f \n", resultadoDecimal);
        break;

        case 12:
        //12) Ler uma variável e acumular em outra um aumento de 25%, apresentado-a no final.
        printf("Insira um valor :");
        scanf("%f", &num1Decimal);
        resultadoDecimal = num1Decimal * 1.25;
        printf("Resultado com aumento de 25%% = %.2f \n", resultadoDecimal);
        break;

        case 13:
        //13) Ler duas variáveis numérica, e apresentar a soma das mesmas, acumulando ou não em outra variável.
        printf("Insira dois números inteiros!\nPrimeiro valor :");
        scanf("%i", &num1);
        printf("Segundo valor :");
        scanf("%i", &num2);
        printf("Resultado = %i \n", num1 + num2);
        break;

        case 14:
        //14) AREA = (BASE x ALTURA) / 2. Área de um Triângulo
        printf("Vamos descobrir a área de um triângulo!\nValor da Base :");
        scanf("%f", &num1Decimal);
        printf("Valor altura :");
        scanf("%f", &num2Decimal);
        resultadoDecimal = (num1Decimal * num2Decimal) / 2;
        printf("Valor da ÁREA = %.2f \n", resultadoDecimal);
        break;

        case 15:
        //15) CAC = 3.1416 * R². Lembre-se que R² é o mesmo que (R * R). Área de um Círculo
        printf("Vamos descobrir a área de um círculo!\nValor do raio :");
        scanf("%f", &num1Decimal);
        resultadoDecimal = 3.1416 * (num1Decimal * num1Decimal);
        printf("Valor da ÁREA do CÍRCULO = %.2f \n", resultadoDecimal);
        break;

        case 16:
        //16) CPC = 2* 3.1416 * R Perímetro de Círculo
        printf("Vamos descobrir o perímetro de um círculo!\nValor do raio :");
        scanf("%f", &num1Decimal);
        resultadoDecimal = (2 *(3.1416 * num1Decimal));
        printf("Valor do perímetro do CÍRCULO = %.2f \n", resultadoDecimal);
        break;

        case 17:
        //17) CVC = (3.1416 * R²) * H Volume de Círculo
        printf("Vamos descobrir o volume de um círculo!\nValor do raio :");
        scanf("%f", &num1Decimal);
        printf("Altura :");
        scanf("%f", &num2Decimal);
        resultadoDecimal = (3.1416 * (num1Decimal * num1Decimal)) * num2Decimal;
        printf("Valor do volume de um círculo = %.2f \n", resultadoDecimal);
        break;

        case 18:
        //18) VCN = ((3.1416 * R²) / 3) * H Volume de um Cone
        printf("Vamos descobrir o volume de um cone!\nValor do raio :");
        scanf("%f", &num1Decimal);
        printf("Altura :");
        scanf("%f", &num2Decimal);
        resultadoDecimal = ((3.1416 * (num1Decimal * num1Decimal))/3) * num2Decimal;
        printf("Valor do volume do cone = %.2f \n", resultadoDecimal);
        break;

        case 19:
        //19) VPD = (L * L) * (H / 3) Volume de Pirâmide
        printf("Vamos descobrir o volume de uma pirâmide!\nValor dos lados: ");
        scanf("%f", &num1Decimal);
        printf("Altura: ");
        scanf("%f", &num2Decimal);
        resultadoDecimal = (num1Decimal * num1Decimal) * (num2Decimal / 3);
        printf("Valor do volume da pirâmide = %.2f \n", resultadoDecimal);
        break;

        case 20:
        //20) VPM = L1 * L2 * L3 Volume de Prisma
        printf("Vamos descobrir o volume de um prisma!\nValor do lado 1: ");
        scanf("%f", &num1Decimal);
        printf("Vamos descobrir o volume de um prisma!\nValor do lado 2: ");
        scanf("%f", &num2Decimal);
        printf("Vamos descobrir o volume de um prisma!\nValor do lado 3: ");
        scanf("%f", &num3Decimal);
        resultadoDecimal = (num1Decimal * num2Decimal * num3Decimal);
        printf("Valor do volume de um prisma = %.2f \n", resultadoDecimal);
        break;

        case 21:
        //21) VEF = (4/3) * 3.1416) * R3 Volume de Esfera.
        printf("Vamos descobrir o volume de uma esfera!\nValor do raio: ");
        scanf("%f", &num1Decimal);
        resultadoDecimal = (4 * 3.1416 * (pow(num1Decimal, 3))) / 3;
        printf("Valor do volume da esfera = %.2f \n", resultadoDecimal);
        break;

        case 23:
        //23) Ler 3 notas e apresentar a média das mesmas.
        printf("Insira 3 notas que irei apresentar a média!\nPrimeira nota: ");
        scanf("%f", &num1Decimal);
        printf("Segunda nota: ");
        scanf("%f", &num2Decimal);
        printf("Terceira nota: ");
        scanf("%f", &num3Decimal);
        resultadoDecimal = (num1Decimal + num2Decimal + num3Decimal) / 3;
        printf("A média é de = %.2f \n", resultadoDecimal);
        break;

        case 24:
        //24) Ler 6 notas e apresentar a soma das mesmas.
        printf("Insira 6 notas que irei apresenta a soma!\nPrimeira nota: ");
        scanf("%f", &num1Decimal);
        printf("Segunda nota: ");
        scanf("%f", &num2Decimal);
        printf("Terceira nota: ");
        scanf("%f", &num3Decimal);
        printf("Quarta nota: ");
        scanf("%f", &num4Decimal);
        printf("Quinta nota: ");
        scanf("%f", &num5Decimal);
        printf("Sexta nota: ");
        scanf("%f", &num6Decimal);
        resultadoDecimal = (num1Decimal + num2Decimal + num3Decimal + num4Decimal + num5Decimal + num6Decimal);
        printf("A soma das notas é de = %.2f \n", resultadoDecimal);
        break;

        case 25:
        //25) Conhecido 3 números inteiros, apresente o resultado da multiplicação dos mesmos
        printf("Me informe 3 números inteiros!\nPrimeiro número: ");
        scanf("%i", &num1);
        printf("Segundo número: ");
        scanf("%i", &num2);
        printf("Terceiro número: ");
        scanf("%i", &num3);
        resultado = (num1 * num2 * num3);
        printf("O resultado é = %i \n", resultado);
        break;

        case 26:
        //26) Informado 3 números, apresente a soma do primeiro com o terceiro, multiplicando pelo segundo.
        printf("Me informe 3 números!\nPrimeiro número: ");
        scanf("%f", &num1Decimal);
        printf("Segundo número: ");
        scanf("%f", &num2Decimal);
        printf("Terceiro número:");
        scanf("%f", &num3Decimal);
        resultadoDecimal = (num1Decimal + num3Decimal) * num2Decimal;
        printf("O resultado é de = %.2f \n", resultadoDecimal);
        break;

        case 27:
        //27) Sendo dado dois números pelo usuário, apresente a décima parte da subtração de um pelo outro,
        // utilizando uma terceira variável.
        printf("Insira 2 números!\nPrimeiro número: ");
        scanf("%f", &num1Decimal);
        printf("Segundo número: ");
        scanf("%f", &num2Decimal);
        subtracao = num1Decimal - num2Decimal;
        resultadoDecimal = subtracao / 10;
        printf("A décima parte da subtração desses números é de = %.2f \n", resultadoDecimal);
        break;

        case 28:
        //28) Baseado no exercício anterior, faça o mesmo processo sem fazer uso de uma terceira variável.
        printf("Insira 2 números!\nPrimeiro número: ");
        scanf("%f", &num1Decimal);
        printf("Segundo número: ");
        scanf("%f", &num2Decimal);
        resultadoDecimal = (num1Decimal - num2Decimal) / 10;
        printf("A décima parte da subtração desses números é de = %.2f \n", resultadoDecimal);
        break;

        default:
        printf("Tente novamente!\n");
    }
    system("pause");
    return 0;
}