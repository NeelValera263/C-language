#include <stdio.h>

void main() {
    float doller,pound;
    printf("Enter the amount in doller to be converted : ");
    scanf("%f",&doller);
    pound = doller*70/48;
    printf("The converted amount in pound is %f", pound); 
}