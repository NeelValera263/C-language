#include <stdio.h>

int main(){
    int i,n,c,a,sum,d;
    sum = 0;
    printf("Enter your number : ");
    scanf("%d",&n);
    a = n;
    for(i=0;i<100;i++){
        n/=10;
        c++;
        if(n==0){
            break;
        }
    }
    for(i=1;i<=c;i++){
        d=a%10;
        sum+=d;
        a/=10;
    }
    printf("The sum of all digits of the number is %d.",sum);
    return 0; 
}