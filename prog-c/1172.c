/*
 * Disciplina: 2026-PCAP
 * Problema  : beecrowd 1172 - Array Replacement I
 * Autor     : Renan vinycios
 * LIAC      : Le 10 inteiros num vetor X, Troca os valores menores ou iguais
 *             a zero por 1, Imprime cada posicao no formato "X[i] = valor"
 */
#include <stdio.h>

int main() {
    int X[10], i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &X[i]);
        if (X[i] <= 0) {
            X[i] = 1;
        }
    }

    for (i = 0; i < 10; i++) {
        printf("X[%d] = %d\n", i, X[i]);
    }

    return 0;
}
