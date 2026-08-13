#include <stdio.h>

int main() {
    float i,p,r,n;
    printf("Enter the Principal value : ");
    scanf("%f",&p);
    printf("Enter the rate percentage : ");
    scanf("%f",&r);
    printf("Enter the time in years : ");
    scanf("%f",&n);
    i = p*r*n/100;
    printf("The value of interest is %f",i);
    return 0;
}