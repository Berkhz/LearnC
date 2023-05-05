#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

#define tam 25
#define maxpal 100

FILE* arquivo;

int qpal = 0;

char palavras[maxpal][25];
char palavrasorteada[25];
char pal[tam][tam];

bool abreArquivo();
void leArquivo();
void sorteia();
void inserePalavra(char* palavrasorteada);
void mostra();
bool buscaPalavra();
/*Declaração dos procedimentos e funções*/
//---------------------------------------------
int main() {
    srand(time(NULL));
    if (!abreArquivo())
        return 0;
    leArquivo();
    do {
        strcpy_s(palavrasorteada, sizeof(palavrasorteada), palavras[rand() % maxpal]);
    } while (strlen(palavrasorteada) == 0);
    sorteia();
    inserePalavra(palavrasorteada);
    mostra();
    buscaPalavra(palavrasorteada);
    printf("\n");
    system("pause");
    return 0;
}
//---------------------------------------------
bool abreArquivo() { //Essa função abre o arquivo .txt;
    if (fopen_s(&arquivo, "palavras.txt", "r") != 0) //leitura
    {  // Se houve erro na leitura do arquivo
        printf("Problemas na leitura do arquivo\n");
        return false; //não conseguiu abrir o arquivo
    }
    return true; //conseguiu abrir o arquivo
}
/*abreArquivo(): abre o arquivo de palavras e retorna true se o arquivo foi aberto com sucesso e false caso contrário.*/
//---------------------------------------------
void leArquivo() { //Esse procedimento lê os arquivos que estão na .txt
    qpal = 0;
    while (fgets(palavras[qpal], 26, arquivo) != NULL)
    {
        palavras[qpal][strlen(palavras[qpal]) - 1] = '\0';
        qpal++;
    }
    fclose(arquivo); //Fecha o arquivo .txt
}
/*leArquivo(): lê o arquivo de palavras e armazena as palavras em um array palavras, que é uma variável global.*/
//---------------------------------------------
void sorteia() { //Esse procedimento sorteia as palavras para serem apresentadas na matriz
    char vog[6] = "AEIOU";
    char con[22] = "BCDFGHJKLMNPQRSTVXWYZ";
    int cont = 1;
    //A=65   Z=90
    for (int x = 0; x < tam; x++)
        for (int y = 0; y < tam; y++) {
            if (cont == 1 || cont == 3)
            {
                pal[x][y] = vog[rand() % 5];
            }
            else
            {
                pal[x][y] = con[rand() % 21];
            }
            cont++;
            if (cont > 3)
            {
                cont = 1;
            }
        }
}
/*sorteia(): preenche a matriz pal com letras geradas aleatoriamente. A cada três posições na matriz, são inseridas vogais, e nas outras posições, consoantes.*/
//---------------------------------------------
void mostra() {
    printf("");
    for (int x = 0; x < tam; x++) {
        for (int y = 0; y < tam; y++) {
            printf("%2c ", pal[x][y]);
        }
        printf("\n");
    }
}
/*mostra(): imprime a matriz pal na tela.*/
//---------------------------------------------
void inserePalavra(char* palavrasorteada) {
    int x, y, x0, y0, dx, dy;
    int direcao = rand() % 4;

    switch (direcao) {
    case 0: // cima para baixo
        dx = 1;
        dy = 0;
        x0 = rand() % (tam - strlen(palavrasorteada));
        y0 = rand() % tam;
        break;
    case 1: // baixo para cima
        dx = -1;
        dy = 0;
        x0 = tam - 1 - rand() % (tam - strlen(palavrasorteada));
        y0 = rand() % tam;
        break;
    case 2: // esquerda para direita
        dx = 0;
        dy = 1;
        x0 = rand() % tam;
        y0 = rand() % (tam - strlen(palavrasorteada));
        break;
    case 3: // direita para esquerda
        dx = 0;
        dy = -1;
        x0 = rand() % tam;
        y0 = tam - 1 - rand() % (tam - strlen(palavrasorteada));
        break;
    default:
        // direção inválida
        return;
    }

    x = x0;
    y = y0;

    for (int i = 0; i < strlen(palavrasorteada); i++) {
        pal[x][y] = palavrasorteada[i];
        x += dx;
        y += dy;
    }

    printf("Palavra '%s' inserida na matriz na posicao(linha: %d, coluna: %d) e vai ", palavrasorteada, x, y);
    switch (direcao) {
    case 0:
        printf("de cima para baixo\n");
        break;
    case 1:
        printf("de baixo para cima\n");
        break;
    case 2:
        printf("da esquerda para direita\n");
        break;
    case 3:
        printf("da direita para esquerda\n");
        break;
    }
}
//---------------------------------------------
bool buscaPalavra(char* palavra) {
    for (int x = 1; x < tam; x++) {
        for (int y = 1; y < tam; y++) {
            // procura da esquerda para a direita
            if (y + strlen(palavra) <= tam) {
                int i;
                for (i = 1; i < strlen(palavra); i++) {
                    if (pal[x][y + i] != palavra[i]) {
                        break;
                    }
                }
                if (i == strlen(palavra)) {
                    printf("Palavra encontrada na horizontal, linha %d, coluna %d.\n", x, y);
                    return true;
                }
            }
            // procura da direita para a esquerda
            if (y >= strlen(palavra) - 1) {
                int i;
                for (i = 1; i < strlen(palavra); i++) {
                    if (pal[x][y - i] != palavra[i]) {
                        break;
                    }
                }
                if (i == strlen(palavra)) {
                    printf("Palavra encontrada da direita para a esquerda, linha %d, coluna %d.\n", x, y);
                    return true;
                }
            }
            // procura de cima para baixo
            if (x + strlen(palavra) <= tam) {
                int i;
                for (i = 1; i < strlen(palavra); i++) {
                    if (pal[x + i][y] != palavra[i]) {
                        break;
                    }
                }
                if (i == strlen(palavra)) {
                    printf("Palavra encontrada na vertical, linha %d, coluna %d.\n", x, y);
                    return true;
                }
            }
            // procura de baixo para cima
            if (x >= strlen(palavra) - 1) {
                int i;
                for (i = 1; i < strlen(palavra); i++) {
                    if (pal[x - i][y] != palavra[i]) {
                        break;
                    }
                }
                if (i == strlen(palavra)) {
                    printf("Palavra encontrada de baixo para cima, linha %d, coluna %d.\n", x, y);
                    return true;
                }
            }
        }
    }
    printf("Palavra nao encontrada.\n");
    return false;
}