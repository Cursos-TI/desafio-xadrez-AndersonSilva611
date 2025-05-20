#include <stdio.h>

// Constantes para número de movimentos
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_RAINHA 8

int main() {
    // Movimentação do Bispo: 5 casas na diagonal superior direita
    printf("Movimentação do Bispo:\n");
    int i = 0;
    while (i < MOVIMENTOS_BISPO) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }

    // Linha separadora
    printf("------------------------\n");

    // Movimentação da Torre: 5 casas para a direita
    printf("Movimentação da Torre:\n");
    for (int j = 0; j < MOVIMENTOS_TORRE; j++) {
        printf("Direita\n");
    }

    // Linha separadora
    printf("------------------------\n");

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("Movimentação da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOVIMENTOS_RAINHA);

    // Finalização
    printf("------------------------\n");
    printf("Fim dos movimentos.\n");

    return 0;
}
