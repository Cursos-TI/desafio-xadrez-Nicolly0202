#include <stdio.h>

// Desafio de Xadrez - MateCheck
// "B" para Bispo, "T" para Torre e "R" para Rainha

int main() {

    int i;

    // Movimentação do Bispo (Diagonal Superior Direita)
    printf("Movimentação do Bispo (Diagonal Superior Direita): \n");
    for (i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            printf("cima\n"); // movimentação par: cima
        } else {
            printf("direita\n"); // movimentação ímpar: direita
        }
    }

    // Movimentação da Torre (horizontal ou vertical)
    printf("Movimentação da Torre:\n");
    i = 0;
    while (i < 5) {
        printf("Direita\n");
        i++;
    }

    // Movimentação da Rainha (horizontal para a esquerda)
    printf("Movimentação da Rainha (5 casas para a esquerda):\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 5);

    return 0;
}