#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {
    // Variáveis 
    const int movimentosBispo = 5;
    const int movimentosTorre = 5;
    const int movimentosRainha = 8;

    int i = 0;

    // Movimento do Bispo: 5 casas na diagonal superior direita 
    printf("Movimento do Bispo:\n");
    i = 0;
    while (i < movimentosBispo) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }

    printf("\n");  // Espaço entre os blocos

    // Movimento da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");  // Espaço entre os blocos

    printf("Movimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < movimentosRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
