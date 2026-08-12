#include <stdio.h>

void main() {
    float a,p,s;
    printf("Enter the value of side of square : ");
    scanf("%f",&s);
    p = 4*s;
    a = s*s;
    printf("The value of area and perimeter of square are %f and %f respectivily",a,p);
}