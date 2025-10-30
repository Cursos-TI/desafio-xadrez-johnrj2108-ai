#include <stdio.h>

// Função recursiva da Torre (move para a direita)
void torre_recursiva(int passos) {
    if (passos <= 0) return;
    printf("Direita\n");
    torre_recursiva(passos - 1);
}

// Função recursiva da Rainha (move para a esquerda)
void rainha_recursiva(int passos) {
    if (passos <= 0) return;
    printf("Esquerda\n");
    rainha_recursiva(passos - 1);
}

// Função recursiva do Bispo (usa loops aninhados para cima e direita)
void bispo_recursivo_loops(int passos) {
    if (passos <= 0) return;

    for (int v = 0; v < 1; v++) {      // movimento vertical
        for (int h = 0; h < 1; h++) {  // movimento horizontal
            printf("Cima, Direita\n");
        }
    }

    bispo_recursivo_loops(passos - 1);
}

int main() {
    // Quantidade de casas por peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento do cavalo (duas para cima, uma para direita)
    int cavaloCima = 2;
    int cavaloDireita = 1;

    // ---------------- TORRE ----------------
    printf("Movimento da Torre:\n");
    torre_recursiva(casasTorre);
    printf("\n");

    // ---------------- BISPO ----------------
    printf("Movimento do Bispo:\n");
    bispo_recursivo_loops(casasBispo);
    printf("\n");

    // ---------------- RAINHA ----------------
    printf("Movimento da Rainha:\n");
    rainha_recursiva(casasRainha);
    printf("\n");

    // ---------------- CAVALO ----------------
    printf("Movimento do Cavalo:\n");

    // Movimento para cima (duas casas)
    for (int i = 0, tentativas = 0; i < cavaloCima; ) {
        tentativas++;
        if (tentativas == 42) continue; // apenas exemplo de continue
        printf("Cima\n");
        i++;
        continue;
    }

    // Movimento para a direita (uma casa)
    for (int i = 0; i < 1; i++) {
        int moveu = 0;
        int tentativas = 0;

        while (1) {
            tentativas++;
            if (tentativas > 1000) break;

            if (moveu == 0) {
                printf("Direita\n");
                moveu = 1;
                break;
            } else {
                continue;
            }
        }

        if (moveu == 1) break;
    }

    printf("\nFim da simulação.\n");
    return 0;
}

