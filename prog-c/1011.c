/* 
Problema 1011 BeeCrowd 
2026.09.22
Renan
*/
#include <stdio.h>

int main() {
    double raio, volume;
    double pi = 3.14159;

    // Lendo o valor do raio (dupla precisão)
    if (scanf("%lf", &raio) == 1) {
        // Calculando o volume da esfera
        volume = (4.0 / 3) * pi * raio * raio * raio;

        // Imprimindo o resultado com 3 casas decimais
        printf("VOLUME = %.3lf\n", volume);
    }

    return 0;
}
