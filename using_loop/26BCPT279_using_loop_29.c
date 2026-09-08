#include <stdio.h>

int main() {
    int a,i,d,n,b,c,h;
    printf("Enter a number : ");
    scanf("%d",&n);
    c=0;
    h=1;
    a=n;
    for(i=0;i<100;i++){
        n/=10;
        c++;
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
            b++;
        }
        }
    if(b==2){
        printf("This number is a Prime Number.");
    } else {printf("This number isn't a Prime Number.");}
    return 0;
    }
    
    