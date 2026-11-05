/*
 * Disciplina: 2026-PCAP
 * Problema  : beecrowd 1175
 * Autor     : Renan vinycios
 * LIAC      : Leia um valor e faça um programa que coloque o valor lido na primeira posição de um vetor N[10]
 */
#include <stdio.h>

int main() {
    int N;
    int fatorial = 1;

    
    scanf("%d", &N);

    
    for (int i = 1; i <= N; i++) {
        fatorial *= i;
    }

    printf("%d\n", fatorial);

    return 0;
}
