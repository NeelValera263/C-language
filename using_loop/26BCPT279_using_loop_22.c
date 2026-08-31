#include <stdio.h>

int main() {
    int i,n,c;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=0;i<100;i++){
        n /= 10;
        c++;
        if(n==0){
            break;
        }
    }
    printf("The number of digits in this number is %d.",c);
    return 0;
}