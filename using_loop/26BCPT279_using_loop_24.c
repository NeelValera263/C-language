#include <stdio.h>

int main(){
    int i,c,n,a,d;
    printf("Enter the number : ");
    scanf("%d",&n);
    a = n;
    printf("Reverse of the number %d is : ",n);
    for(i=0;i<100;i++){
        n/=10;
        c++;
        if(n==0){
            break;
        }
    }
    for(i=0;i<c;i++){
        d = a%10;
        printf("%d",d);
        a/=10;
    }
    return 0; 
}