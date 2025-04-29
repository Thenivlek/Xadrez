#include <stdio.h>
#include <stdlib.h>  // necessário para system()

/*
  Desafio: Movimentando as Pecas do xadrez (Avancado)
  - Torre:    5 casas para a direita        (FOR)
  - Bispo:    5 casas diagonal cima+direita (WHILE)
  - Rainha:   8 casas para a esquerda       (DO-WHILE)
  - Cavalo:   2 casas para baixo, 1 para a esquerda (FOR + WHILE aninhados)
*/

int main() {
    /* === Definicao do numero de casas === */
    const int casasTorre     = 5;
    const int casasBispo     = 5;
    const int casasRainha    = 8;
    const int movCavaloBaixo = 2;  // Cavalo: duas casas para baixo
    const int movCavaloEsq   = 1;  // Cavalo: uma casa para a esquerda

    /* === Movimentacao da Torre (FOR) === */
    printf("Movimentacao da Torre:\n");
    for (int passo = 1; passo <= casasTorre; passo++) {
        printf("Direita\n");
    }
    printf("\n");

    /* === Movimentacao do Bispo (WHILE) === */
    printf("Movimentacao do Bispo:\n");
    int passoBispo = 0;
    while (passoBispo < casasBispo) {
        printf("Cima, Direita\n");
        passoBispo++;
    }
    printf("\n");

    /* === Movimentacao da Rainha (DO-WHILE) === */
    printf("Movimentacao da Rainha:\n");
    int passoRainha = 0;
    do {
        printf("Esquerda\n");
        passoRainha++;
    } while (passoRainha < casasRainha);
    printf("\n");

    /* === Movimentacao do Cavalo (FOR + WHILE aninhados) === */
    printf("Movimentacao do Cavalo:\n");
    for (int repeticao = 1; repeticao <= 1; repeticao++) {
        int passoCavalo = 0;
        // Parte vertical do "L"
        while (passoCavalo < movCavaloBaixo) {
            printf("Baixo\n");
            passoCavalo++;
        }
        // Parte horizontal do "L"
        for (int h = 0; h < movCavaloEsq; h++) {
            printf("Esquerda\n");
        }
    }

    /* === Pausa antes de fechar o console === */
    system("PAUSE");

    return 0;
}
