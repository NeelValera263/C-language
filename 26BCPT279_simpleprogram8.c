#include <stdio.h>

void main() {
    float doller,rupee;
    printf("Enter the doller to be converted : ");
    scanf("%f",&doller);
    rupee = doller * 48;
    printf("The amount in rupee is %f\n",rupee);
}