#include <stdio.h>

int main() {
    int gs,ns,d;
    printf("Enter the value of gross sales : ");
    scanf("%d",&gs);
    
    if(gs>=20000){
        d=15*gs/100;
        ns= gs - d;
        printf("The net sales are %d",ns);
    }
    else if(gs>=10000 && gs<20000){
        d=gs/10;
        ns= gs - d;
        printf("The net sales are %d",ns);
    }
    else if(gs<10000){
        d=gs/20;
        ns= gs - d;
        printf("The net sales are %d",ns);
    }
    return 0;
}