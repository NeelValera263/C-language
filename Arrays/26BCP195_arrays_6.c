#include <stdio.h>

int main() {
    int i, j, k;
    int prod[2][2] = {0};
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 2; k++) {
                prod[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
