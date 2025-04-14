#include <stdio.h>

// Recursividade das Torre, Rainha e Bispo

void moverT(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverT(casas - 1);
    }
}

void moverR(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverR(casas - 1);
    }
}

void moverB(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverB(casas - 1);
    }
}

int main() {
    const int movimentosBispo = 5;
    const int movimentosTorre = 5;
    const int movimentosRainha = 8;

    // Movimento do Bispo para 5 casas para cima e 5 casas para direita
    printf("Movimento do Bispo:\n");
    moverB(movimentosBispo);
    printf("\n");

    // Movimento da Torre 5 casas para direita
    printf("Movimento da Torre:\n");
    moverT(movimentosTorre);
    printf("\n");

    // Movimento da Rainha 8 casas para esquerda
    printf("Movimento da Rainha:\n");
    moverR(movimentosRainha);
    printf("\n");

    // Movimento do Cavalo: 2 casas para cima e 1 casa para direita
    printf("Movimento do Cavalo:\n");

    int casasVerticais = 2;
    int casasHorizontais = 1;

    for (int i = 0, j = 0; i < casasVerticais || j < casasHorizontais; ) {
        if (i < casasVerticais) {
            printf("Cima\n");
            i++;
        } else if (j < casasHorizontais) {
            printf("Direita\n");
            j++;
        } else {
            break;
        }
    }

    return 0;
}