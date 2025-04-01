#include <stdio.h>

// Função para exibir o tabuleiro
void exibir_tabuleiro(int tabuleiro[10][10]) {
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Matriz 10x10 inicializada com 0s
    int cone[10][10] = {0};  
    int cruz[10][10] = {0};  
    int octaedro[10][10] = {0};  


    // Variáveis com o tamanho das matrizes
    int tamanho = 10;  // Tamanho da matriz
    int meio = tamanho / 2;  // Definindo o meio da matriz (índice 5)

    // Preenchendo a matriz com o padrão de cone
    for (int i = 0; i <= meio; i++) {
        // Preenche as posições da forma de cone com 1
        for (int j = meio - i; j < meio + i; j++) {
            cone[i][j] = 1;
        }
    }

    // Preenchendo a matriz com o padrão de cruz
    for (int i = 0; i < tamanho; i++) {
        // Preenche as posições da forma de cruz com 1
        for (int j = 0; j < tamanho; j++) {
            if(i == meio - 1){
                cruz[i][j] = 1;
            }
            if(j == meio - 1){
                cruz[i][j] = 1;
            }
        }
    }

    // Preenchendo a matriz com o padrão de octaedro
    for (int i = 1; i <= meio; i++) {
        // Preenche as posições da forma de octaedro com 1
        for (int j = meio - i - 1; j < meio + i; j++) {
            octaedro[i][j] = 1;
            octaedro[9 - i][j] = 1;
        }
    }

    // Exibindo o cone
    printf("\n--Habilidade Cone--\n");
    exibir_tabuleiro(cone);  // Exibe a matriz 10x10

    // Exibindo a cruz
    printf("\n--Habilidade Cruz--\n");
    exibir_tabuleiro(cruz);  // Exibe a matriz 10x10

    // Exibindo o octaedro
    printf("\n--Habilidade Octaedro--\n");
    exibir_tabuleiro(octaedro);  // Exibe a matriz 10x10

    return 0;
}
