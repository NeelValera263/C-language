#include <stdio.h>

int main() {
    float g,kg;
    printf("Enter the value of kilograms to be converted to gram : ");
    scanf("%f",&kg);
    g=kg*1000;
    printf("The value of gram is %f",g);
    return 0;
}