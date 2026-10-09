#include <stdio.h>

int main() {
    int i,j,sum[2][2],a[2][2]={{1,2},{3,4}},b[2][2]={{5,6},{7,8}};
    
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        sum[i][j] = a[i][j] + b[i][j];
        }
    }
     for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}