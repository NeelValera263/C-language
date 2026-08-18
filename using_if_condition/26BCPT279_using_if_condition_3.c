#include <stdio.h>

int main() {
    float ns,gs,a,d;
    printf("Enter your gross salary : ");
    scanf("%f" ,&gs);
    
    if(gs>=10000){
        a = gs/10;
        d = 3*gs/100;
        ns = gs + a - d;
        printf("Your net salary is %f", ns);
    }
    else if(gs>=5000 && gs<10000){
        a = 7*gs/100;
        d = 2*gs/100;
        ns = gs + a - d;
        printf("Your net salary is %f", ns);
    }
    else if(gs<5000)
        printf("Your net salary is %f", gs);
    return 0;
}