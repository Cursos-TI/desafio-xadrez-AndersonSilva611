#include <stdio.h>

// Constantes
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

// Função recursiva para a Torre
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para a Rainha
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Função recursiva para o Bispo com loop aninhado
void moverBispo(int passoAtual) {
    if (passoAtual > MOV_BISPO) return;

    // Loop interno para representar diagonal: cima + direita
    for (int i = 0; i < 1; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    moverBispo(passoAtual + 1);
}

// Movimento do Cavalo usando múltiplas variáveis, break/continue e loops aninhados
void moverCavalo() {
    printf("Movimentação do Cavalo:\n");

    for (int i = 0, j = 0; i < 3 && j < 3; i++, j++) {
        if (i == 1) continue; // pula o índice 1 só para mostrar uso do continue
        if (i > 1) break;     // interrompe após um movimento completo

        // Movimento: 2 para cima
        for (int k = 0; k < 2; k++) {
            printf("Cima\n");
        }

        // Movimento: 1 para a direita
        printf("Direita\n");

        printf("--- Movimento em L concluído ---\n");
    }
}

int main() {
    printf("Movimentação do Bispo:\n");
    moverBispo(1);

    printf("\nMovimentação da Torre:\n");
    moverTorre(MOV_TORRE);

    printf("\nMovimentação da Rainha:\n");
    moverRainha(MOV_RAINHA);

    printf("\n");
    moverCavalo();

    printf("\nFim de todos os movimentos.\n");
    return 0;
}
