#include <stdio.h>

int main() {
    int i,j,wT[4][4],w[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    for (i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",w[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            wT[i][j]=w[j][i];
        }
    }
    printf("Transpose of original matirx : \n");
    for (i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",wT[i][j]);
        }
        printf("\n");
    }
    return 0;
}