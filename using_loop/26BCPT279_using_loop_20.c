#include <stdio.h>

int main() {
    int i,sum;
    sum = 0;
    for(i=0;i<=100;i++){
        if(i%3!=0){
            continue;
        }
        sum += i;
    }
    printf("The sum of all number divisible by 3 in 1 to 100 is %d.\n",sum);
    return 0;
}