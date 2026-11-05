/* 
Problema 1011 BeeCrowd 
2026.09.22
Renan
*/
#include <stdio.h>

int main() {
    double raio, area;
    double n = 3.14159;

    if (scanf("%lf", &raio) == 1) {
        area = n * (raio * raio);
        printf("A=%.4lf\n", area);
    }

    return 0;
}