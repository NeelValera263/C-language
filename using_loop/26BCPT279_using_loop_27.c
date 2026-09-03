#include <stdio.h>

int main() {
    int i,a,c,n,b,d,h;
    printf("Enter your number : ");
    scanf("%d",&n);
    a = n;
    b = n;
    h=1;
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
    printf("The factors are : ");
    for(i=1;i<h;i++){
        d=a%i;
        if(b==i){
            printf("%d",i);
        }
        if(d==0 && b!=i){
            printf("%d,",i);
        }
    }
    return 0;
}