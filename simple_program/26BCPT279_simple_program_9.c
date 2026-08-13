#include <stdio.h>

void main() {
    float doller,rupee;
    printf("Enter the amount in rupee to be converted : ");
    scanf("%f",&rupee);
    doller = rupee/48;
    printf("The converted amount in doller is %f", doller); 
}