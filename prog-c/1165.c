#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    
    if (scanf("%d", &n) != 1) return 0;
    
    while (n--) {
        int x;
        scanf("%d", &x);
        
        bool eh_primo = true;
        
        
        if (x <= 1) {
            eh_primo = false;
        } else {
            
        
            for (int i = 2; i * i <= x; i++) {
                if (x % i == 0) {
                    eh_primo = false;
                    break; 
                }
            }
        }
        
        
        if (eh_primo) {
            printf("%d eh primo\n", x);
        } else {
            printf("%d nao eh primo\n", x);
        }
    }
    
    return 0;
}
