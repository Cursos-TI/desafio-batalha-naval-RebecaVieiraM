#include <stdio.h>

// =========================================
// Programa: Habilidades Especiais - Batalha Naval
// Descrição: Simula a criação de habilidades especiais (cone, cruz e octaedro)
// no tabuleiro 10x10 de Batalha Naval, exibindo as áreas afetadas por essas habilidades.
//
// Autor: Rebeca Vieira Maia
// ========================================= 

// Função para exibir o tabuleiro com as áreas afetadas pelas habilidades
void exibir_tabuleiro(int tabuleiro[10][10]) {
    // Exibe as bordas do tabuleiro para uma melhor visualização
    printf("------------------------\n");
    // Percorre a matriz de 10x10 para exibir os valores
    for(int i = 0; i < 10; i++) {
        printf("|");
        // Imprime cada valor da linha
        for(int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf(" |\n");
    }
    // Exibe a borda final do tabuleiro
    printf("------------------------\n");
}

int main() {
    // Declaração de matrizes 10x10 para armazenar as diferentes habilidades
    int cone[10][10] = {0};  // Matriz para habilidade Cone
    int cruz[10][10] = {0};  // Matriz para habilidade Cruz
    int octaedro[10][10] = {0};   // Matriz para habilidade Octaedro

    // Variáveis com o tamanho da matriz e cálculo do meio do tabuleiro
    int tamanho = 10;  // Tamanho da matriz 10x10
    int meio = tamanho / 2;  // Definindo o meio da matriz (índice 5)

    // Preenchendo a matriz com o padrão de cone
    for (int i = 0; i <= meio; i++) {
        // Preenche as posições da forma de cone com 3
        for (int j = meio - i; j < meio + i; j++) {
            cone[i][j] = 3;
        }
    }

    // Preenchendo a matriz com o padrão de cruz
    for (int i = 0; i < tamanho; i++) {
        cruz[i][meio] = 3;  // Preenche a coluna do meio com 3
        cruz[meio][i] = 3;  // Preenche a linha do meio com 3
    }

    // Preenchendo a matriz com o padrão de octaedro
    for (int i = 0; i < meio; i++) {
        // Preenche as posições da forma de octaedro com 3
        for (int j = meio - i - 1; j < meio + i; j++) {
            octaedro[i][j] = 3;  // Preenche a parte superior do octaedro
            octaedro[9 - i][j] = 3;  // Preenche a parte inferior do octaedro
        }
    }

    // Exibindo o cone
    printf("\n-- Habilidade Cone --\n");
    exibir_tabuleiro(cone);  // Exibe o tabuleiro com a habilidade cone

    // Exibindo a cruz
    printf("\n-- Habilidade Cruz --\n");
    exibir_tabuleiro(cruz);  // Exibe o tabuleiro com a habilidade cruz

    // Exibindo o octaedro
    printf("\n-- Habilidade Octaedro --\n");
    exibir_tabuleiro(octaedro);  // Exibe o tabuleiro com a habilidade octaedro

    return 0;
}