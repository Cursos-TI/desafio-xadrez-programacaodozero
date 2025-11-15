#include <stdio.h>

int main() {
// Desafio de Xadrez
// Movimentando as peças utilizando estruturas de repetição
    
    int t = 0, b = 0;

    printf("*Movimento da Torre*\n\n");

    //Mover a Torre 5 casas para a direita
    while (t < 5)
    {
        printf("Direita\n"); //Imprime a direção do movimento
        t++;
    }

    printf("\n*Movimento do Bispo*\n\n");

    //Mover o Bispo 5 casas na diagonal, para cima e à direita
    do {

        printf("Cima, Direita\n"); //Imprime a direção do movimento
        b++;

    } while (b < 5);

    printf("\n*Movimento da Rainha*\n\n");

    //Mover a Rainha 8 casas para a esquerda
    for (int r = 0; r < 8; r++)
    {
        printf("Esquerda\n"); //Imprime a direção do movimento
    }

    return 0;
}
