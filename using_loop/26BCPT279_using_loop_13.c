#include <stdio.h>

int main(){
    int i,sum,n;
    n=1;
    sum = 0;
    for(i=1;i<8;i++){
          n = i*13;
        sum += n;
    }
    printf("%d",sum);

}
