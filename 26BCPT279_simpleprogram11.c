#include <stdio.h>

int main() {
    float g,kg;
    printf("Enter the value of grams to be converted to kilogram : ");
    scanf("%f",&g);
    kg=g/1000;
    printf("The value of kilogram is %f",kg);
    return 0;
}