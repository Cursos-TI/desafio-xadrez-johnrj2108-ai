#include <stdio.h>

int main() {
    // =========================
    // Simulação do movimento das peças de xadrez
    // Torre -> usa "for"
    // Bispo -> usa "while"
    // Rainha -> usa "do-while"
    // =========================

    // Quantidade de casas que cada peça vai se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i; // variável de controle genérica

    // --------------------------
    // TORRE (usa "for")
    // Movimento: 5 casas para a direita
    // --------------------------
    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // separador visual entre as peças

    // --------------------------
    // BISPO (usa "while")
    // Movimento: 5 casas na diagonal (Cima, Direita)
    // --------------------------
    printf("Movimento do Bispo:\n");
    i = 1; // reinicia contador
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n");

    // --------------------------
    // RAINHA (usa "do-while")
    // Movimento: 8 casas para a esquerda
    // --------------------------
    printf("Movimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    printf("\nFim da simulação.\n");

    return 0;
}

