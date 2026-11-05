/*
 * Disciplina: 2026-PCAP
 * Problema  : beecrowd 1167
 * Autor     : Renan vinycios
 * LIAC      : Leia um valor inteiro X (1 <= X <= 1000)
 */
#include <stdio.h>

int main() {
    int X;


    if (scanf("%d", &X) == 1) {
        
        for (int i = 1; i <= X; i++) {
        
            if (i % 2 != 0) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
