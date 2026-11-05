/*Problema 1073 BeeCrowd 
2026.09.22
Renan
*/
#include <stdio.h>

int main() {
    int N;
    

    if (scanf("%d", &N) == 1) {

        for (int i = 2; i <= N; i += 2) {
            printf("%d^2 = %d\n", i, i * i);
        }
    }
    
    return 0;
}
