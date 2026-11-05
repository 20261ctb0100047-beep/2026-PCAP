/* 
Problema 1041 BeeCrowd 
2026.09.22
Renan
*/
#include <stdio.h>

int main() {
    float x, y;
    
    // Lê as coordenadas x e y do ponto
    if (scanf("%f %f", &x, &y) == 2) {
        // Verifica a posição do ponto com base nas regras cartesianas
        if (x == 0.0 && y == 0.0) {
            printf("Origem\n");
        } else if (x == 0.0) {
            printf("Eixo Y\n");
        } else if (y == 0.0) {
            printf("Eixo X\n");
        } else if (x > 0.0 && y > 0.0) {
            printf("Q1\n");
        } else if (x < 0.0 && y > 0.0) {
            printf("Q2\n");
        } else if (x < 0.0 && y < 0.0) {
            printf("Q3\n");
        } else {
            printf("Q4\n");
        }
    }
    
    return 0;
}
