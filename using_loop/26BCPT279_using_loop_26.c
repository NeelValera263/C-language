#include <stdio.h>

int main() {
    int i,a,c,d,b,n,sum,j,p;
    printf("Enter the number : ");
    scanf("%d",&n);
    a = n;
    b = n;
    c=0;
    p=1;
    sum=0;
    for(i=0;i<100;i++){
        c++;
        n/=10;
        if(n==0){
            break;
        }
    }
    for(i=0;i<c;i++){
        d=a%10;
        for(j=0;j<c;j++){
            p*=d;
        }
        sum+=p;
        p=1;
        a/=10;
    }
    if(b==sum){
        printf("Its an angstrom number.");
    } else{
        printf("Its not an angstrom number.");
    }
    return 0;
}