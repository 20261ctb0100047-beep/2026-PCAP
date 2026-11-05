/*
 * Disciplina: 2026-PCAP
 * Problema  : beecrowd 1164
 * Autor     : Renan vinycios
 * LIAC      : escrever um programa que imprima se um determinado número é perfeito ou não
 */
#include <stdio.h>
#include <math.h>

void verificar_numero_perfeito() {
    int N;
    if (scanf("%d", &N) != 1) return;

    for (int k = 0; k < N; k++) {
        long long X;
        scanf("%lld", &X);

        if (X <= 1) {
            printf("%lld nao eh perfeito\n", X);
            continue;
        }
        long long soma = 1;
        long long limite = (long long)sqrt(X);

        for (long long i = 2; i <= limite; i++) {
            if (X % i == 0) {
                soma += i;
                long long outro_divisor = X / i;
                if (outro_divisor != i) {
                    soma += outro_divisor;
                }
            }
        }

        if (soma == X) {
            printf("%lld eh perfeito\n", X);
        } else {
            printf("%lld nao eh perfeito\n", X);
        }
    }
}

int main() {
    verificar_numero_perfeito();
    return 0;
}