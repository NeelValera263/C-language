#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("Fibonacci series up to %d numbers:\n", n);
    
    if (n >= 1) {
        long long a = 1, b = 1;
        
        if (n >= 1) printf("%lld", a);
        if (n >= 2) printf(", %lld", b);
        
        for (int i = 3; i <= n; i++) {
            long long next = a + b;
            printf(", %lld", next);
            a = b;
            b = next;
        }
    }
    
    printf("\n");
    return 0;
}