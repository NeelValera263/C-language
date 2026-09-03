#include <stdio.h>

int main() {
    int i,a,b,c,n,h,d,sum;
    printf("Enter the number : ");
    scanf("%d",&n);
    a = n;
    b=n;
    h=1;
    sum=0;
    c=0;
    for(i=0;i<100;i++){
        c++;
        n/=10;
        if(n==0){
            break;
        }
    }
    for(i=0;i<c;i++){
        h*=10;
    }
    for(i=1;i<h;i++){
        d=a%i;
        if(d==0){
            sum += i;
            if(a/2==i){
                break;
            }
        }
    }
    if(sum == b){
        printf("The number is a perfect number.");
    } else{
        printf("The number is not a perfect number.");
    }
    return 0;
}