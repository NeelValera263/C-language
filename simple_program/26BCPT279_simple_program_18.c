#include <stdio.h>

void main() {
    float a,p,l,b;
    printf("Enter the value of length of rectangle : ");
    scanf("%f",&l);
    printf("Enter the value of breath of rectangle : ");
    scanf("%f",&b);
    p = 2*(l+b);
    a = l*b;
    printf("The value of area and perimeter of rectangle are %f and %f respectivily",a,p);
}