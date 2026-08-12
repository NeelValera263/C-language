#include <stdio.h>

void main() {
    float hour,min;
    printf("Enter the value of minute : ");
    scanf("%f",&min);
    hour=min/60;
    printf("The converted value of hour from minute is %f",hour);
}