#include <stdio.h>
/*
 * Disciplina: 2026-PCAP
 * Problema  : beecrowd 1178
 * Autor     : Renan vinycios
 * LIAC      : Leia um valor X. Coloque este valor na primeira posição de um vetor N[100]
 */

 int main() {
    double x;
    double n[100];


    if (scanf("%lf", &x) == 1) {
        
        n[0] = x;

    
        for (int i = 1; i < 100; i++) {
            n[i] = n[i - 1] / 2.0;
        }


        for (int i = 0; i < 100; i++) {
            printf("N[%d] = %.4lf\n", i, n[i]);
        }
    }

    return 0;
}
