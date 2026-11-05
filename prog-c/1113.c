/*
 * Disciplina: 2026-PCAP
 * Problema  : beecrowd 1113
 * Autor     : Renan vinycios
 * LIAC      : Leia uma quantidade indeterminada de duplas de valores inteiros X e Y
 */
#include <stdio.h>

int main() {
    int X, Y;


    while (scanf("%d %d", &X, &Y) == 2) {
    
        if (X == Y) {
            break;
        }
        
        
        if (X < Y) {
            printf("Crescente\n");
        } else {
            printf("Decrescente\n");
        }
    }

    return 0;
}
