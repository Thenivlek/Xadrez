#include <stdio.h>
#include <stdlib.h>   // necessário para system()

/* === Definições de constantes === */
const int TORRE_STEPS      = 5;
const int BISPO_STEPS      = 5;
const int RAINHA_STEPS     = 8;
const int CAVALO_CIMA      = 2;  // duas casas para cima
const int CAVALO_DIREITA   = 1;  // uma casa para a direita

/* === Prototipos de funções recursivas === */
void moverTorre(int passos);
void moverBispo(int passos);
void moverRainha(int passos);

/* === Função principal === */
int main() {
    /* Torre */
    printf("Movimentacao da Torre:\n");
    moverTorre(TORRE_STEPS);
    printf("\n");

    /* Bispo */
    printf("Movimentacao do Bispo:\n");
    moverBispo(BISPO_STEPS);
    printf("\n");

    /* Rainha */
    printf("Movimentacao da Rainha:\n");
    moverRainha(RAINHA_STEPS);
    printf("\n");

    /* Cavalo (movimentos complexos em L) */
    printf("Movimentacao do Cavalo:\n");
    // Loops aninhados com continue e break
    for (int v = 0; v < CAVALO_CIMA; v++) {
        // parte vertical
        printf("Cima\n");
        // parte horizontal dentro do mesmo laço aninhado
        for (int h = 0; h < CAVALO_DIREITA; h++) {
            if (v < CAVALO_CIMA - 1) {
                // ainda faltam passos verticais: ignora a horizontal
                continue;
            }
            // somente na última iteração vertical, faça o horizontal
            printf("Direita\n");
            break;
        }
    }

    /* Pausa antes de fechar o console (Windows) */
    system("PAUSE");
    return 0;
}

/* === Implementações recursivas === */

/**
 * moverTorre(passos):
 *   - se passos == 0, termina
 *   - imprime "Direita" e chama moverTorre(passos - 1)
 */
void moverTorre(int passos) {
    if (passos <= 0) {
        return;
    }
    printf("Direita\n");
    moverTorre(passos - 1);
}

/**
 * moverBispo(passos):
 *   - se passos == 0, termina
 *   - usa loops aninhados (externo = vertical, interno = horizontal)
 *     para imprimir "Cima, Direita" em cada casa
 *   - chama moverBispo(passos - 1)
 */
void moverBispo(int passos) {
    if (passos <= 0) {
        return;
    }
    // loop vertical (sempre 1 iteração, pois cada passo é uma casa)
    for (int i = 0; i < 1; i++) {
        // loop horizontal (idem)
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }
    // chama recursivamente para o próximo passo
    moverBispo(passos - 1);
}

/**
 * moverRainha(passos):
 *   - se passos == 0, termina
 *   - imprime "Esquerda" e chama moverRainha(passos - 1)
 */
void moverRainha(int passos) {
    if (passos <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(passos - 1);
}
