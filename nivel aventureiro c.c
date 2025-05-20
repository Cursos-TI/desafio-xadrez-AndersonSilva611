#include <stdio.h>

// Quantidade de movimentos em L
#define MOVIMENTOS_CAVALO 3

int main() {
    printf("Movimentação do Cavalo:\n");

    // Loop externo: controla quantos movimentos em L o cavalo fará
    for (int i = 0; i < MOVIMENTOS_CAVALO; i++) {
        // Primeiro movimento: 2 passos para baixo
        int passos = 0;
        while (passos < 2) {
            printf("Baixo\n");
            passos++;
        }

        // Segundo movimento: 1 passo para a esquerda
        printf("Esquerda\n");

        // Separação de movimentos
        printf("--- Movimento em L concluído ---\n");
    }

    printf("Fim da movimentação do cavalo.\n");
    return 0;
}
