## Desafio Xadrez em C – Nível Mestre

Este programa em C simula os movimentos de quatro peças de xadrez em um tabuleiro hipotético, imprimindo no console a direção de cada “casa” percorrida:

- **Torre**: movimento horizontal recursivo (5 casas para a direita).
- **Bispo**: movimento diagonal usando recursão + loops aninhados (5 casas “Cima, Direita”).
- **Rainha**: movimento horizontal recursivo (8 casas para a esquerda).
- **Cavalo**: movimento em “L” com loops complexos (2 casas para cima + 1 para a direita).

Ao final, o programa chama `system("PAUSE")` para que o console aguarde uma tecla antes de fechar.

---

## Pré-requisitos

- Compilador C (GCC)
- Ambiente Windows (recomenda-se para `system("PAUSE")`; em Linux/macOS, comente ou remova essa linha)

---

## Como Compilar e Executar

1. Abra o terminal na pasta do projeto.
2. Compile:

```bash
  gcc -o xadrez xadrez.c
```

3. Execute: xadrez.exe

## Autor

- Desenvolvido por Kelvin Viana.
