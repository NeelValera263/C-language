#include <stdio.h>

int main() {
    float h,l,a;
    printf("Enter the value of height : ");
    scanf("%f",&h);
    printf("Enter the value of length : ");
    scanf("%f",&l);
    a = h*l/2;
    printf("The area of triangle is %f",a);
    return 0;
}