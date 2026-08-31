#include <stdio.h>

int main(){
    int i;
    for(i=1;i<3;i++){
        for(int j=1;j<4;j++){
            printf("%d  %d\n",i,j);
        }
    }
    return 0;
}