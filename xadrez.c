#include <stdio.h>
#include <stdlib.h>

/*
  Desafio: Movimentando as Pecas do xadrez
  - Torre: 5 casas para a direita (usando for)
  - Bispo: 5 casas na diagonal cima-direita (usando while)
  - Rainha: 8 casas para a esquerda (usando do-while)
  As direcoes sao impressas a cada casa percorrida.
*/

int main() {
    /* === Definicao do numero de casas === */
    const int casasTorre  = 5;
    const int casasBispo  = 5;
    const int casasRainha = 8;

    /* === Movimentacao da Torre (FOR) === */
    /* Torre anda em linha reta (horizontal/vertical) */
    printf("Movimentacao da Torre:\n");
    for (int passo = 1; passo <= casasTorre; passo++) {
        printf("Direita\n");
    }
    printf("\n");

    /* === Movimentacao do Bispo (WHILE) === */
    /* Bispo anda em diagonal: cima + direita */
    printf("Movimentacao do Bispo:\n");
    int passoBispo = 0;
    while (passoBispo < casasBispo) {
        printf("Cima Direita\n");
        passoBispo++;
    }
    printf("\n");

    /* === Movimentacao da Rainha (DO-WHILE) === */
    /* Rainha anda em todas direcoes; aqui, para a esquerda */
    printf("Movimentacao da Rainha:\n");
    int passoRainha = 0;
    do {
        printf("Esquerda\n");
        passoRainha++;
    } while (passoRainha < casasRainha);
    system("PAUSE");
    return 0;
}
