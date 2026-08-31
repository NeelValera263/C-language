#include <stdio.h>

int main() {
    int i,n,c,j,a;
    c=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    a=n;
    for(i=1;i<10;i++){
        n/=10;
        c++;
        if(n==0){
            break;
        }
    }
    for(i=1;i<=c;i++){
        j=a%10;
        printf("%d",j);
        a/=10;
        if(i!=c){
            printf(",");
        }
        else break;
    }
    return 0;
}