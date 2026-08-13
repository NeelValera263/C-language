#include <stdio.h>

int main() {
    float hour,min;
    printf("Enter the value of hour : ");
    scanf("%f",&hour);
    min = hour*60;
    printf("The converted hour to min is %f",min);
    return 0;
}