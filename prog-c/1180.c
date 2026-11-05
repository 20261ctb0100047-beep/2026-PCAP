/*
 *Disciplina: 2026-PCAP
 *Problema  : beecrowd 1180
 *Autor     : Renan vinycios
 *LIAC      : aça um programa que leia um valor N. Este N será o tamanho de um vetor X[N]
 */
#include <stdio.h>

int main() {
    int N;
    

    if (scanf("%d", &N) != 1) return 0;
    
    int X[N];
    
    
    if (scanf("%d", &X[0]) != 1) return 0;
    int menor = X[0];
    int posicao = 0;
    

    for (int i = 1; i < N; i++) {
        if (scanf("%d", &X[i]) != 1) return 0;
        
        if (X[i] < menor) {
            menor = X[i];
            posicao = i;
        }
    }
    
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
    
    return 0;
}